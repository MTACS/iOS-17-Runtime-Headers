
@protocol UMSideEffectsProviding <NSObject>

@required

- (NSObject<UMLibInfoProviding> *)libInfo;
- (NSObject<UMLibNotifyProviding> *)libNotify;

@end
