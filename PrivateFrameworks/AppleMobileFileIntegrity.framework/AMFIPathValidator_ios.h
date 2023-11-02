
@interface AMFIPathValidator_ios : NSObject {
    bool  _areEntitlementsValidated;
    unsigned long long  _bootargs;
    NSData * _cdhash;
    NSError * _error;
    int  _flags;
    bool  _isValid;
    NSNumber * _offset;
    NSData * _profileData;
    unsigned int  _signerType;
    NSURL * _url;
    bool  _validated;
}

@property (nonatomic, readonly) bool areEntitlementsValidated;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) NSData *profileData;
@property (nonatomic, readonly) unsigned int signerType;

- (void).cxx_destruct;
- (bool)areEntitlementsValidated;
- (bool)computedCdHash:(unsigned char)arg1;
- (id)error;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 withFileOffset:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1 withFileOffset:(unsigned long long)arg2 withFlags:(int)arg3;
- (id)initWithURL:(id)arg1 withFileOffsetAsNumber:(id)arg2 withFlags:(int)arg3;
- (id)initWithURL:(id)arg1 withFlags:(int)arg2;
- (int)isSignerType;
- (bool)isValid;
- (id)profileData;
- (unsigned int)signerType;
- (bool)validateWithError:(id*)arg1;

@end
