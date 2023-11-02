
@interface CKDPTokenRegistrationBody : PBCodable <NSCopying> {
    int  _apnsEnv;
    NSString * _bundleIdentifier;
    struct { 
        unsigned int apnsEnv : 1; 
        unsigned int skipBundleIDCheck : 1; 
    }  _has;
    bool  _skipBundleIDCheck;
    NSData * _token;
}

@property (nonatomic) int apnsEnv;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) bool hasApnsEnv;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic) bool hasSkipBundleIDCheck;
@property (nonatomic, readonly) bool hasToken;
@property (nonatomic) bool skipBundleIDCheck;
@property (nonatomic, retain) NSData *token;

- (void).cxx_destruct;
- (int)StringAsApnsEnv:(id)arg1;
- (int)apnsEnv;
- (id)apnsEnvAsString:(int)arg1;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApnsEnv;
- (bool)hasBundleIdentifier;
- (bool)hasSkipBundleIDCheck;
- (bool)hasToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApnsEnv:(int)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setHasApnsEnv:(bool)arg1;
- (void)setHasSkipBundleIDCheck:(bool)arg1;
- (void)setSkipBundleIDCheck:(bool)arg1;
- (void)setToken:(id)arg1;
- (bool)skipBundleIDCheck;
- (id)token;
- (void)writeTo:(id)arg1;

@end
