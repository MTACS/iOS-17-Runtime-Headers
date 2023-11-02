
@interface BiometricMatchOperation : BiometricOperation {
    NSData * _acmContext;
    bool  _forCredentialSet;
    bool  _forPreArm;
    bool  _forUnlock;
    bool  _noBioLockout;
    struct { 
        unsigned int usingAuthToken; 
        unsigned int tokenLength; 
        unsigned char token[32]; 
    }  _noBioLockoutAuthData;
    unsigned int  _noBioLockoutUserID;
    unsigned int  _processedFlags;
    NSData * _selectedIdentitiesBlob;
    bool  _stopOnSuccess;
    int  _useCase;
    unsigned int  _userID;
}

@property (nonatomic, retain) NSData *acmContext;
@property (nonatomic) bool forCredentialSet;
@property (nonatomic) bool forPreArm;
@property (nonatomic) bool forUnlock;
@property (nonatomic) bool noBioLockout;
@property (nonatomic, readonly) struct { unsigned int x1; unsigned int x2; unsigned char x3[32]; }*noBioLockoutAuthData;
@property (nonatomic) unsigned int noBioLockoutUserID;
@property (nonatomic) unsigned int processedFlags;
@property (nonatomic, retain) NSData *selectedIdentitiesBlob;
@property (nonatomic) bool stopOnSuccess;
@property (nonatomic) int useCase;
@property (nonatomic) unsigned int userID;

- (void).cxx_destruct;
- (id)acmContext;
- (unsigned int)cancelledMessage;
- (bool)forCredentialSet;
- (bool)forPreArm;
- (bool)forUnlock;
- (id)init;
- (bool)noBioLockout;
- (struct { unsigned int x1; unsigned int x2; unsigned char x3[32]; }*)noBioLockoutAuthData;
- (unsigned int)noBioLockoutUserID;
- (unsigned int)processedFlags;
- (id)selectedIdentitiesBlob;
- (void)setAcmContext:(id)arg1;
- (void)setForCredentialSet:(bool)arg1;
- (void)setForPreArm:(bool)arg1;
- (void)setForUnlock:(bool)arg1;
- (void)setNoBioLockout:(bool)arg1;
- (void)setNoBioLockoutUserID:(unsigned int)arg1;
- (void)setProcessedFlags:(unsigned int)arg1;
- (void)setSelectedIdentitiesBlob:(id)arg1;
- (void)setStopOnSuccess:(bool)arg1;
- (void)setUseCase:(int)arg1;
- (void)setUserID:(unsigned int)arg1;
- (bool)stopOnSuccess;
- (int)type;
- (int)useCase;
- (unsigned int)userID;

@end
