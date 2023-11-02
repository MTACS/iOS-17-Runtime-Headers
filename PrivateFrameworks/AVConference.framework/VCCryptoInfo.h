
@interface VCCryptoInfo : NSObject {
    struct tagSRTPINFO { 
        int fSRTPInitialized; 
        int fCancelled; 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } xWait; 
        struct _opaque_pthread_cond_t { 
            long long __sig; 
            BOOL __opaque[40]; 
        } cWait; 
        unsigned int dwSSRC; 
        unsigned int dwRTPROC; 
        unsigned short wFirstRTPSeq; 
        unsigned short wHighestRTPSeq; 
        unsigned int dwFirstRTCPSeq; 
        unsigned int dwHighestRTCPSeq; 
        unsigned long long SRTPIndex; 
        int mediaKeyLength; 
        int sessionKeyLength; 
        unsigned char MediaKey[32]; 
        unsigned char MasterSalt[14]; 
        unsigned char SessionKey[32]; 
        unsigned char SessionSalt[14]; 
        unsigned char SessionAuthenticationKey[20]; 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } MKIAccess; 
        void *mediaKeyIndex; 
        void *mediaKeyIndexInPacket; 
        unsigned int SRTCPIndex; 
        unsigned int dwDerivationRate; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } cryptContextLock; 
        struct tagSRTPCryptContext { 
            struct _CCCryptor {} *ccCryptorRef; 
        } cryptContext; 
        struct tagSRTPTransformPolicy { 
            int cipherMode; 
            int mediaKeyLength; 
            int sessionKeyLength; 
            int sessionSaltLength; 
            int authenticationMode; 
            int sessionAuthenticationKeyLength; 
            int sessionAuthenticationTagLength; 
            int cipherSuite; 
        } policy; 
        unsigned int operatingMode; 
        bool enableEncryptionDebug; 
    }  _SRTPInfo;
}

@property (readonly) struct tagSRTPINFO { int x1; int x2; struct _opaque_pthread_mutex_t { long long x_3_1_1; BOOL x_3_1_2[56]; } x3; struct _opaque_pthread_cond_t { long long x_4_1_1; BOOL x_4_1_2[40]; } x4; unsigned int x5; unsigned int x6; unsigned short x7; unsigned short x8; unsigned int x9; unsigned int x10; unsigned long long x11; int x12; int x13; unsigned char x14[32]; unsigned char x15[14]; unsigned char x16[32]; unsigned char x17[14]; unsigned char x18[20]; struct _opaque_pthread_mutex_t { long long x_19_1_1; BOOL x_19_1_2[56]; } x19; void *x20; void *x21; unsigned int x22; unsigned int x23; struct os_unfair_lock_s { unsigned int x_24_1_1; } x24; struct tagSRTPCryptContext { struct _CCCryptor {} *x_25_1_1; } x25; struct tagSRTPTransformPolicy { int x_26_1_1; int x_26_1_2; int x_26_1_3; int x_26_1_4; int x_26_1_5; int x_26_1_6; int x_26_1_7; int x_26_1_8; } x26; unsigned int x27; bool x28; }*state;

- (void)dealloc;
- (id)initWithSRTPInfo:(struct tagSRTPINFO { int x1; int x2; struct _opaque_pthread_mutex_t { long long x_3_1_1; BOOL x_3_1_2[56]; } x3; struct _opaque_pthread_cond_t { long long x_4_1_1; BOOL x_4_1_2[40]; } x4; unsigned int x5; unsigned int x6; unsigned short x7; unsigned short x8; unsigned int x9; unsigned int x10; unsigned long long x11; int x12; int x13; unsigned char x14[32]; unsigned char x15[14]; unsigned char x16[32]; unsigned char x17[14]; unsigned char x18[20]; struct _opaque_pthread_mutex_t { long long x_19_1_1; BOOL x_19_1_2[56]; } x19; void *x20; void *x21; unsigned int x22; unsigned int x23; struct os_unfair_lock_s { unsigned int x_24_1_1; } x24; struct tagSRTPCryptContext { struct _CCCryptor {} *x_25_1_1; } x25; struct tagSRTPTransformPolicy { int x_26_1_1; int x_26_1_2; int x_26_1_3; int x_26_1_4; int x_26_1_5; int x_26_1_6; int x_26_1_7; int x_26_1_8; } x26; unsigned int x27; bool x28; }*)arg1;
- (struct tagSRTPINFO { int x1; int x2; struct _opaque_pthread_mutex_t { long long x_3_1_1; BOOL x_3_1_2[56]; } x3; struct _opaque_pthread_cond_t { long long x_4_1_1; BOOL x_4_1_2[40]; } x4; unsigned int x5; unsigned int x6; unsigned short x7; unsigned short x8; unsigned int x9; unsigned int x10; unsigned long long x11; int x12; int x13; unsigned char x14[32]; unsigned char x15[14]; unsigned char x16[32]; unsigned char x17[14]; unsigned char x18[20]; struct _opaque_pthread_mutex_t { long long x_19_1_1; BOOL x_19_1_2[56]; } x19; void *x20; void *x21; unsigned int x22; unsigned int x23; struct os_unfair_lock_s { unsigned int x_24_1_1; } x24; struct tagSRTPCryptContext { struct _CCCryptor {} *x_25_1_1; } x25; struct tagSRTPTransformPolicy { int x_26_1_1; int x_26_1_2; int x_26_1_3; int x_26_1_4; int x_26_1_5; int x_26_1_6; int x_26_1_7; int x_26_1_8; } x26; unsigned int x27; bool x28; }*)state;

@end
