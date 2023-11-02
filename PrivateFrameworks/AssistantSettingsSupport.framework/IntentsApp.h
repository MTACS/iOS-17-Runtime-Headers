
@interface IntentsApp : NSObject {
    bool  _accessGranted;
    NSString * _appID;
    NSString * _displayName;
}

@property (nonatomic, readonly) bool accessGranted;
@property (nonatomic, readonly, copy) NSString *appID;
@property (nonatomic, readonly, copy) NSString *displayName;

- (void).cxx_destruct;
- (bool)accessGranted;
- (id)appID;
- (long long)compareWithIntentsApp:(id)arg1;
- (id)displayName;
- (id)initWithAppId:(id)arg1 displayName:(id)arg2 accessGranted:(bool)arg3;

@end
