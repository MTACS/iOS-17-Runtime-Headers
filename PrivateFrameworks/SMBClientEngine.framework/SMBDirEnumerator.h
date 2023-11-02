
@interface SMBDirEnumerator : NSObject {
    unsigned char  f_NetworkNameBuffer;
    unsigned int  f_NetworkNameLen;
    struct smbfattr { 
        unsigned long long fa_valid_mask; 
        unsigned int fa_attr; 
        unsigned long long fa_size; 
        unsigned long long fa_data_alloc; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_atime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_chtime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_mtime; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_crtime; 
        unsigned long long fa_ino; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } fa_reqtime; 
        int fa_vtype; 
        unsigned long long fa_uid; 
        unsigned long long fa_gid; 
        unsigned long long fa_permissions; 
        unsigned long long fa_nlinks; 
        unsigned int fa_flags_mask; 
        unsigned int fa_unix; 
        unsigned int fa_reparse_tag; 
        unsigned short fa_fstatus; 
        unsigned int fa_created_disp; 
        unsigned long long fa_rsrc_size; 
        unsigned long long fa_rsrc_alloc; 
        unsigned char fa_finder_info[32]; 
        unsigned int fa_max_access; 
    }  f_attr;
    int  f_attrmask;
    NSString * f_createName;
    SMB_rq * f_create_rqp;
    unsigned int  f_eofs;
    int  f_flags;
    unsigned char  f_infolevel;
    NSString * f_lookupName;
    int  f_need_close;
    SMBNode * f_node;
    unsigned int  f_output_buf_len;
    unsigned int  f_query_buffer_len;
    SMB_rq * f_query_dir_rqp;
    struct smb_query_dir { 
        unsigned char fileInfoClass; 
        unsigned char flags; 
        unsigned int fileIndex; 
        unsigned int fileNameFlags; 
        unsigned int ntStatus; 
    }  f_query_inp;
    unsigned int  f_resume_file_index;
    unsigned short  f_searchCount;
    int  f_sfm_conversion;
    unsigned int  f_shareID;
    SMBPiston * pd;
}

+ (void)enumeratorWithParameters:(id)arg1 onShareID:(unsigned int)arg2 dirName:(id)arg3 lookUpName:(id)arg4 searchFlags:(unsigned int)arg5 outParameters:(struct smb_dir_enum_out { unsigned int x1; unsigned int x2; }*)arg6 callBack:(id /* block */)arg7;

- (void).cxx_destruct;
- (int)cleanup;
- (void)close:(struct smb_dir_enum_out { unsigned int x1; unsigned int x2; }*)arg1 callBack:(id /* block */)arg2;
- (int)commonInit:(id)arg1 onShareID:(unsigned int)arg2 dirName:(id)arg3 lookUpName:(id)arg4 searchFlags:(unsigned int)arg5 outParameters:(struct smb_dir_enum_out { unsigned int x1; unsigned int x2; }*)arg6;
- (void)dealloc;
- (id)init:(id)arg1 onShareID:(unsigned int)arg2 dirName:(id)arg3 lookUpName:(id)arg4 searchFlags:(unsigned int)arg5 outParameters:(struct smb_dir_enum_out { unsigned int x1; unsigned int x2; }*)arg6 callBack:(id /* block */)arg7;
- (void)nextEntry:(id)arg1 outParameters:(struct smb_dir_enum_out { unsigned int x1; unsigned int x2; }*)arg2 callBack:(id /* block */)arg3;
- (int)smb2_smb_parse_query_dir_both_dir_info:(struct mdchain { struct piston_mbuf {} *x1; struct piston_mbuf {} *x2; char *x3; unsigned long long x4; }*)arg1;
- (int)smb2_smb_query_dir:(unsigned int*)arg1;
- (int)smb2fs_smb_findnext:(unsigned int*)arg1;

@end
