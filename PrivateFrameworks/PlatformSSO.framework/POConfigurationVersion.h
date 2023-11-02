
@interface POConfigurationVersion : NSObject {
    int  _token;
    long long  _type;
    unsigned long long  _version;
}

@property (nonatomic, readonly) long long version;

+ (id)notificationForType:(long long)arg1;

- (void)_setStateAndNotify:(unsigned long long)arg1 type:(long long)arg2;
- (unsigned long long)_state;
- (long long)checkVersion;
- (void)dealloc;
- (void)increaseVersionWithMessage:(id)arg1;
- (id)initWithConfigurationType:(long long)arg1;
- (void)reset;
- (void)setPlatformSSOUnavailable;
- (long long)version;

@end
