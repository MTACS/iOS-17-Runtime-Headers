
@interface ICASAppData : NSObject <AADataEventType> {
    NSString * _appBuild;
    NSString * _appVersion;
}

@property (nonatomic, readonly) NSString *appBuild;
@property (nonatomic, readonly) NSString *appVersion;

+ (id)dataName;

- (void).cxx_destruct;
- (id)appBuild;
- (id)appVersion;
- (id)initWithAppVersion:(id)arg1 appBuild:(id)arg2;
- (id)toDict;

@end
