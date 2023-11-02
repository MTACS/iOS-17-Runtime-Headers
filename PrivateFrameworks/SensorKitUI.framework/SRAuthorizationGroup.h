
@interface SRAuthorizationGroup : NSObject {
    NSBundle * _bundle;
}

@property (readonly, copy) NSString *authorizationService;
@property (readonly, retain) UIImage *illustration;
@property (readonly, copy) NSArray *localizedCollectedData;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly, copy) NSString *localizedDisplayName;
@property (readonly, copy) NSArray *localizedNotCollectedData;
@property (readonly, copy) NSString *localizedPlatforms;
@property (readonly, copy) NSString *localizedRequiredAuthAlertDetail;
@property (readonly, copy) NSString *localizedRevokeRequiredAuthAlertDetail;
@property (readonly, copy) NSArray *localizedSampleData;
@property (readonly, copy) NSArray *localizedWhenShared;
@property (readonly, copy) NSArray *platforms;
@property (readonly, copy) NSString *writerAuthorizationService;

+ (id)authorizationGroupWithServiceName:(id)arg1;
+ (void)initialize;

- (id)authorizationService;
- (void)dealloc;
- (id)illustration;
- (id)infoPlistAuthorizationCategory;
- (id)initWithBundle:(id)arg1;
- (id)localizedCollectedData;
- (id)localizedDescription;
- (id)localizedDisplayName;
- (id)localizedExampleDataValue:(id)arg1;
- (id)localizedNotCollectedData;
- (id)localizedPlatforms;
- (id)localizedRequiredAuthAlertDetail;
- (id)localizedRevokeRequiredAuthAlertDetail;
- (id)localizedSampleData;
- (id)localizedWhenShared;
- (id)platforms;
- (id)writerAuthorizationService;

@end
