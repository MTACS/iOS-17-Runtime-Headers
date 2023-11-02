
@interface PTClassicKey : NSObject {
    bool  _isExportedData;
    NSData * _keyData;
    struct { 
        struct { 
            char *data; 
            unsigned long long length; 
        } version; 
        struct { 
            char *data; 
            unsigned long long length; 
        } instanceSerialNumber; 
        struct { 
            char *data; 
            unsigned long long length; 
        } publicKey; 
        struct { 
            char *data; 
            unsigned long long length; 
        } keyNumber; 
        struct { 
            char *data; 
            unsigned long long length; 
        } deviceInfos; 
        struct { 
            char *data; 
            unsigned long long length; 
        } counterLimit; 
        struct { 
            char *data; 
            unsigned long long length; 
        } counterIndex; 
    }  ptKeyBlob;
    struct { 
        struct { 
            char *data; 
            unsigned long long length; 
        } version; 
        struct { 
            char *data; 
            unsigned long long length; 
        } assetACL; 
        struct { 
            char *data; 
            unsigned long long length; 
        } assetACLAttestation; 
        struct { 
            char *data; 
            unsigned long long length; 
        } keyBlob; 
        struct { 
            char *data; 
            unsigned long long length; 
        } encryptedWrappedKeyBlob; 
    }  ptKeyOutput;
}

@property (readonly) bool isExportedData;
@property (readonly) NSData *keyData;

+ (id)withData:(id)arg1 error:(id*)arg2;
+ (id)withExportedBlob:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)assetACL;
- (id)assetACLAttestation;
- (struct { char *x1; unsigned long long x2; })assetACLAttestationItem;
- (struct { char *x1; unsigned long long x2; })assetACLItem;
- (id)description;
- (id)encryptedWrappedKeyBlob;
- (struct { char *x1; unsigned long long x2; })encryptedWrappedKeyBlobItem;
- (bool)isExportedData;
- (id)keyBlob;
- (struct { char *x1; unsigned long long x2; })keyBlobItem;
- (id)keyData;
- (id)keyIdentifier;
- (unsigned int)keyNumber;
- (id)publicKey;

@end
