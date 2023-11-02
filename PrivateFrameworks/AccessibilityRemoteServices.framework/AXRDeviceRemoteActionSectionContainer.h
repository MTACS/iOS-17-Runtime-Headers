
@interface AXRDeviceRemoteActionSectionContainer : NSObject {
    NSString * _localizedTitle;
    long long  _preferredContextType;
    NSArray * _remoteActions;
}

@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) long long preferredContextType;
@property (nonatomic, readonly) NSArray *remoteActions;

- (void).cxx_destruct;
- (id)initWithLocalizedTitle:(id)arg1 preferredContextType:(long long)arg2 remoteActions:(id)arg3;
- (id)localizedTitle;
- (long long)preferredContextType;
- (id)remoteActions;

@end
