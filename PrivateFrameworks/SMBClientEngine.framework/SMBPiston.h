
@interface SMBPiston : NSObject {
    NSString * _password;
    NSString * _realm;
    NSMutableDictionary * _shareList;
    SMBSocket * _sock;
    NSString * _userName;
    int  free_credit_cond;
    int  free_credit_mutex;
    int  free_session_mutex;
    int  free_share_list_mutex;
    int  free_state_mutex;
    struct smb_session { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } session_lock; 
        unsigned int sv_caps; 
        unsigned short sv_sessflags; 
        unsigned short sv_dialect; 
        unsigned short sv_neg_context_cnt; 
        unsigned int sv_capabilities; 
        unsigned int sv_maxtransact; 
        unsigned int sv_maxread; 
        unsigned int sv_maxwrite; 
        unsigned char sv_guid[16]; 
        unsigned short sv_security_mode; 
        unsigned int sv_mechs; 
        struct gss_ctx_id_t_desc_struct {} *gss_context; 
        struct gss_cred_id_t_desc_struct {} *gss_cred; 
        struct gss_buffer_desc_struct { 
            unsigned long long length; 
            void *value; 
        } gss_in_token; 
        struct gss_buffer_desc_struct { 
            unsigned long long length; 
            void *value; 
        } gss_out_token; 
        unsigned int sess_setup_nt_status; 
        unsigned int neg_capabilities; 
        unsigned char client_guid[16]; 
        unsigned short neg_security_mode; 
        unsigned short neg_dialect_count; 
        unsigned short neg_dialects[8]; 
        char *session_mackey; 
        unsigned int session_mackeylen; 
        char *full_session_mackey; 
        unsigned int full_session_mackeylen; 
        unsigned char smb3_signing_key[16]; 
        unsigned int smb3_signing_key_len; 
        unsigned short smb3_signing_algorithm; 
        char *sess_setup_reply; 
        unsigned long long sess_setup_reply_len; 
        unsigned long long sess_setup_message_id; 
        unsigned char pre_auth_int_salt[32]; 
        unsigned char pre_auth_int_hash_neg[64]; 
        unsigned char pre_auth_int_hash[64]; 
        unsigned char smb3_encrypt_key[32]; 
        unsigned int smb3_encrypt_key_len; 
        unsigned short smb3_encrypt_ciper; 
        unsigned char smb3_decrypt_key[32]; 
        unsigned int smb3_decrypt_key_len; 
        unsigned long long smb3_nonce_high; 
        unsigned long long smb3_nonce_low; 
        unsigned long long session_flags; 
        unsigned long long option_flags; 
        unsigned long long session_id; 
        unsigned long long prev_session_id; 
        unsigned long long session_server_caps; 
        unsigned long long session_volume_caps; 
        char *session_model_infop; 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } session_credits_lock; 
        _Atomic unsigned long long session_message_id; 
        _Atomic unsigned int session_credits_granted; 
        _Atomic unsigned int session_credits_ss_granted; 
        _Atomic unsigned int session_credits_max; 
        _Atomic int session_credits_wait; 
        struct _opaque_pthread_cond_t { 
            long long __sig; 
            BOOL __opaque[40]; 
        } session_credits_wait_cond; 
        unsigned int session_req_pending; 
        unsigned long long session_oldest_message_id; 
    }  session;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  share_list_mutex;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  state_mutex;
}

@property (retain) NSString *password;
@property (retain) NSString *realm;
@property (retain) NSMutableDictionary *shareList;
@property SMBSocket *sock;
@property (retain) NSString *userName;

- (void).cxx_destruct;
- (void)dealloc;
- (void)disconnect;
- (unsigned int)getCreateOptions:(id)arg1 onShareID:(unsigned int)arg2 parentName:(id)arg3 streamName:(id)arg4 vnodeType:(int)arg5 fileAttributes:(unsigned int)arg6 checkForReparsePoint:(unsigned int)arg7;
- (unsigned int)getCreateOptions:(id)arg1 parentName:(id)arg2 streamName:(id)arg3 vnodeType:(int)arg4 fileAttributes:(unsigned int)arg5 checkForReparsePoint:(unsigned int)arg6;
- (int)getPeerAddress:(struct sockaddr_storage { unsigned char x1; unsigned char x2; BOOL x3[6]; long long x4; BOOL x5[112]; }*)arg1 withLength:(unsigned int*)arg2;
- (struct smb_session { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; unsigned int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10[16]; unsigned short x11; unsigned int x12; struct gss_ctx_id_t_desc_struct {} *x13; struct gss_cred_id_t_desc_struct {} *x14; struct gss_buffer_desc_struct { unsigned long long x_15_1_1; void *x_15_1_2; } x15; struct gss_buffer_desc_struct { unsigned long long x_16_1_1; void *x_16_1_2; } x16; unsigned int x17; unsigned int x18; unsigned char x19[16]; unsigned short x20; unsigned short x21; unsigned short x22[8]; char *x23; unsigned int x24; char *x25; unsigned int x26; unsigned char x27[16]; unsigned int x28; unsigned short x29; char *x30; unsigned long long x31; unsigned long long x32; unsigned char x33[32]; unsigned char x34[64]; unsigned char x35[64]; unsigned char x36[32]; unsigned int x37; unsigned short x38; unsigned char x39[32]; unsigned int x40; unsigned long long x41; }*)getSessionPtr;
- (id)getShare:(unsigned int)arg1;
- (id)init;
- (void)ioctl:(struct smb_ioctl { unsigned int x1; unsigned int x2; unsigned short x3; unsigned int x4; struct smb_valid_neg { unsigned int x_5_1_1; unsigned short x_5_1_2; unsigned short x_5_1_3; unsigned short x_5_1_4[8]; unsigned char x_5_1_5[16]; unsigned int x_5_1_6; unsigned short x_5_1_7; unsigned short x_5_1_8; unsigned short x_5_1_9[8]; unsigned char x_5_1_10[16]; } x5; }*)arg1 onShareID:(unsigned int)arg2 getDFSRefFor:(id)arg3 withRecvData:(id)arg4 callBack:(id /* block */)arg5;
- (void)ioctl:(struct smb_ioctl { unsigned int x1; unsigned int x2; unsigned short x3; unsigned int x4; struct smb_valid_neg { unsigned int x_5_1_1; unsigned short x_5_1_2; unsigned short x_5_1_3; unsigned short x_5_1_4[8]; unsigned char x_5_1_5[16]; unsigned int x_5_1_6; unsigned short x_5_1_7; unsigned short x_5_1_8; unsigned short x_5_1_9[8]; unsigned char x_5_1_10[16]; } x5; }*)arg1 onShareID:(unsigned int)arg2 pipeWaitOnName:(id)arg3 withTimeOut:(long long)arg4 callBack:(id /* block */)arg5;
- (void)leaseBreakAcknowledge:(struct smb_lease_break_ack { unsigned int x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned long long x6; unsigned long long x7; unsigned int x8; }*)arg1 callBack:(id /* block */)arg2;
- (void)login:(struct smb_login_out { unsigned int x1; unsigned long long x2; unsigned int x3; unsigned short x4; unsigned long long x5; unsigned long long x6; }*)arg1 asUser:(id)arg2 withPassword:(id)arg3 inRealm:(id)arg4 callBack:(id /* block */)arg5;
- (void)logoff;
- (void)logoff:(struct smb_login_out { unsigned int x1; unsigned long long x2; unsigned int x3; unsigned short x4; unsigned long long x5; unsigned long long x6; }*)arg1 callBack:(id /* block */)arg2;
- (void)negotiateTo:(id)arg1 netBIOSname:(id)arg2 outParameters:(struct smb_negotiate { unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5[3]; unsigned char x6[16]; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg3 callBack:(id /* block */)arg4;
- (void)negotiateTo:(id)arg1 netBIOSname:(id)arg2 port:(unsigned short)arg3 outParameters:(struct smb_negotiate { unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5[3]; unsigned char x6[16]; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg4 callBack:(id /* block */)arg5;
- (void)negotiateTo:(id)arg1 netBIOSname:(id)arg2 port:(unsigned short)arg3 withTimeOut:(unsigned int)arg4 outParameters:(struct smb_negotiate { unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5[3]; unsigned char x6[16]; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg5 callBack:(id /* block */)arg6;
- (void)negotiateTo:(id)arg1 netBIOSname:(id)arg2 withVPNCookie:(id)arg3 outParameters:(struct smb_negotiate { unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5[3]; unsigned char x6[16]; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg4 callBack:(id /* block */)arg5;
- (id)password;
- (void)queryShareInformation:(struct smb_query_share { unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; }*)arg1 forShareID:(unsigned int)arg2 forModelInfo:(id)arg3 forFileSystemName:(id)arg4 callBack:(id /* block */)arg5;
- (id)realm;
- (void)resolveID:(struct smb_create { unsigned long long x1; unsigned char x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; void *x9; unsigned int x10; unsigned int x11; unsigned char x12; unsigned char x13; unsigned int x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned int x21; unsigned int x22; struct { unsigned long long x_23_1_1; unsigned long long x_23_1_2; } x23; struct smb_resolve_id { unsigned long long x_24_1_1; unsigned int x_24_1_2; } x24; struct smb_dur_handle { unsigned long long x_25_1_1; unsigned long long x_25_1_2; unsigned int x_25_1_3; unsigned long long x_25_1_4; unsigned long long x_25_1_5; unsigned short x_25_1_6; unsigned int x_25_1_7; unsigned char x_25_1_8[16]; struct { unsigned long long x_9_2_1; unsigned long long x_9_2_2; } x_25_1_9; unsigned long long x_25_1_10; unsigned int x_25_1_11; unsigned int x_25_1_12; } x25; }*)arg1 forShareID:(unsigned int)arg2 returnPath:(id)arg3 callBack:(id /* block */)arg4;
- (void)serverCopyFile:(struct smb_server_copy_file { unsigned int x1; }*)arg1 onShareID:(unsigned int)arg2 from:(id)arg3 to:(id)arg4 withOptions:(unsigned long long)arg5 callBack:(id /* block */)arg6;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setOption:(const char *)arg1 toValue:(unsigned int)arg2;
- (void)setPassword:(id)arg1;
- (void)setRealm:(id)arg1;
- (void)setShareList:(id)arg1;
- (void)setSock:(id)arg1;
- (void)setUserName:(id)arg1;
- (id)shareList;
- (void)share_list_lock;
- (void)share_list_unlock;
- (id)sock;
- (void)treeConnect:(struct smb_tree_connect_disc { unsigned int x1; unsigned char x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 toShare:(id)arg2 callBack:(id /* block */)arg3;
- (void)treeDisconnect:(struct smb_tree_connect_disc { unsigned int x1; unsigned char x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 fromShareID:(unsigned int)arg2 callBack:(id /* block */)arg3;
- (id)userName;
- (void)validateNegotiate:(struct smb_ioctl { unsigned int x1; unsigned int x2; unsigned short x3; unsigned int x4; struct smb_valid_neg { unsigned int x_5_1_1; unsigned short x_5_1_2; unsigned short x_5_1_3; unsigned short x_5_1_4[8]; unsigned char x_5_1_5[16]; unsigned int x_5_1_6; unsigned short x_5_1_7; unsigned short x_5_1_8; unsigned short x_5_1_9[8]; unsigned char x_5_1_10[16]; } x5; }*)arg1 callBack:(id /* block */)arg2;
- (void)validateNegotiate:(struct smb_ioctl { unsigned int x1; unsigned int x2; unsigned short x3; unsigned int x4; struct smb_valid_neg { unsigned int x_5_1_1; unsigned short x_5_1_2; unsigned short x_5_1_3; unsigned short x_5_1_4[8]; unsigned char x_5_1_5[16]; unsigned int x_5_1_6; unsigned short x_5_1_7; unsigned short x_5_1_8; unsigned short x_5_1_9[8]; unsigned char x_5_1_10[16]; } x5; }*)arg1 onShareID:(unsigned int)arg2 callBack:(id /* block */)arg3;

@end
