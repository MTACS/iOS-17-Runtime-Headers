
@interface CSVoiceProfileContext : NSObject {
    NSString * _homeId;
    NSString * _languageCode;
    unsigned long long  _onboardType;
    NSString * _productCategory;
    NSString * _profileId;
    NSString * _userName;
    NSNumber * _version;
}

@property (nonatomic, retain) NSString *homeId;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic) unsigned long long onboardType;
@property (nonatomic, retain) NSString *productCategory;
@property (nonatomic, retain) NSString *profileId;
@property (nonatomic, retain) NSString *userName;
@property (nonatomic, retain) NSNumber *version;

- (void).cxx_destruct;
- (id)description;
- (id)homeId;
- (id)initWithSharedSiriId:(id)arg1 languageCode:(id)arg2 productCategory:(id)arg3 version:(id)arg4 sharedHomeId:(id)arg5 userName:(id)arg6;
- (id)languageCode;
- (unsigned long long)onboardType;
- (id)productCategory;
- (id)profileId;
- (void)setHomeId:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setOnboardType:(unsigned long long)arg1;
- (void)setProductCategory:(id)arg1;
- (void)setProfileId:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)userName;
- (id)version;

@end
