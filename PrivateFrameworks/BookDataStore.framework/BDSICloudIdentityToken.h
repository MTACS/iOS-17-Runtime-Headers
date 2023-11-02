
@interface BDSICloudIdentityToken : NSObject {
    NSString * _token;
}

@property (nonatomic, copy) NSString *token;

+ (id)tokenForCurrentIdentityIfCloudKitEnabled;
+ (id)tokenForCurrentIdentityIfICloudDriveEnabled;

- (void).cxx_destruct;
- (id)_hashFor:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initFromArchive:(id)arg1;
- (id)initWithCurrentIdentity;
- (id)initWithToken:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
