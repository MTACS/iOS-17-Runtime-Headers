
@interface VSAppInstallMetadata : NSObject {
    bool  _beta;
    bool  _managed;
    bool  _profileValidated;
    NSString * _sourceApp;
}

@property (getter=isBeta, nonatomic) bool beta;
@property (nonatomic, readonly) long long installSource;
@property (getter=isManaged, nonatomic) bool managed;
@property (getter=isProfileValidated, nonatomic) bool profileValidated;
@property (nonatomic, retain) NSString *sourceApp;

- (void).cxx_destruct;
- (id)init;
- (id)initWithApplicationRecord:(id)arg1;
- (long long)installSource;
- (bool)isBeta;
- (bool)isManaged;
- (bool)isProfileValidated;
- (void)setBeta:(bool)arg1;
- (void)setManaged:(bool)arg1;
- (void)setProfileValidated:(bool)arg1;
- (void)setSourceApp:(id)arg1;
- (id)sourceApp;

@end
