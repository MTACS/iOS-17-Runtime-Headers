
@interface SBSUIInCallWindowSceneDeviceLockEvent : NSObject {
    long long  _sourceType;
}

@property (nonatomic, readonly) long long sourceType;

- (id)initWithSourceType:(long long)arg1;
- (long long)sourceType;

@end
