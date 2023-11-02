
@interface SSRVoiceProfileMetaContext : NSObject {
    NSString * _appDomain;
    NSDate * _dateAdded;
    NSString * _homeId;
    NSString * _languageCode;
    NSNumber * _pitch;
    NSString * _productCategory;
    NSString * _profileId;
    NSString * _sharedSiriId;
    NSString * _userName;
    NSNumber * _version;
}

@property (nonatomic, retain) NSString *appDomain;
@property (nonatomic, retain) NSDate *dateAdded;
@property (nonatomic, retain) NSString *homeId;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) NSNumber *pitch;
@property (nonatomic, retain) NSString *productCategory;
@property (nonatomic, retain) NSString *profileId;
@property (nonatomic, retain) NSString *sharedSiriId;
@property (nonatomic, retain) NSString *userName;
@property (nonatomic, retain) NSNumber *version;

- (void).cxx_destruct;
- (id)appDomain;
- (id)dateAdded;
- (id)description;
- (id)homeId;
- (id)initWithSharedSiriId:(id)arg1 languageCode:(id)arg2 productCategory:(id)arg3 version:(id)arg4;
- (id)initWithVoiceProfile:(id)arg1;
- (id)languageCode;
- (id)pitch;
- (id)productCategory;
- (id)profileId;
- (void)setAppDomain:(id)arg1;
- (void)setDateAdded:(id)arg1;
- (void)setHomeId:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setPitch:(id)arg1;
- (void)setProductCategory:(id)arg1;
- (void)setProfileId:(id)arg1;
- (void)setSharedSiriId:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)sharedSiriId;
- (id)userName;
- (id)version;

@end
