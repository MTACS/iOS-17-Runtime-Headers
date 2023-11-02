
@interface AMSSnapshotBagBuilder : NSObject {
    NSDictionary * _data;
    NSDictionary * _defaultValues;
    NSDate * _expirationDate;
    AMSProcessInfo * _processInfo;
    NSString * _profile;
    NSString * _profileVersion;
}

@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic, retain) NSDictionary *defaultValues;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) AMSProcessInfo *processInfo;
@property (nonatomic, retain) NSString *profile;
@property (nonatomic, retain) NSString *profileVersion;

- (void).cxx_destruct;
- (id)buildWithError:(id*)arg1;
- (id)data;
- (id)defaultValues;
- (id)expirationDate;
- (id)processInfo;
- (id)profile;
- (id)profileVersion;
- (void)setData:(id)arg1;
- (void)setDefaultValues:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setProcessInfo:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setProfileVersion:(id)arg1;

@end
