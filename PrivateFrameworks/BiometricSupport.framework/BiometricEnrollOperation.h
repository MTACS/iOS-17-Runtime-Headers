
@interface BiometricEnrollOperation : BiometricOperation {
    struct { 
        unsigned int usingAuthToken; 
        unsigned int tokenLength; 
        unsigned char token[32]; 
    }  _authData;
    struct { 
        unsigned int type; 
        unsigned char uuid[16]; 
    }  _deviceGroup;
    unsigned int  _processedFlags;
    unsigned int  _userID;
}

@property (nonatomic, readonly) struct { unsigned int x1; unsigned int x2; unsigned char x3[32]; }*authData;
@property (nonatomic, readonly) struct { unsigned int x1; unsigned char x2[16]; }*deviceGroup;
@property (nonatomic) unsigned int processedFlags;
@property (nonatomic) unsigned int userID;

- (struct { unsigned int x1; unsigned int x2; unsigned char x3[32]; }*)authData;
- (unsigned int)cancelledMessage;
- (struct { unsigned int x1; unsigned char x2[16]; }*)deviceGroup;
- (id)init;
- (unsigned int)processedFlags;
- (void)setProcessedFlags:(unsigned int)arg1;
- (void)setUserID:(unsigned int)arg1;
- (int)type;
- (unsigned int)userID;

@end
