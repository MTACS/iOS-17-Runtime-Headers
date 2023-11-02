
@interface AVVirtualCaptureCard : NSObject {
    struct OpaqueFigVirtualCaptureCard { } * _virtualCaptureCard;
}

@property (nonatomic, readonly) long long capacity;
@property (nonatomic, readonly) long long freeSpace;

+ (void)initialize;
+ (bool)isVirtualCaptureCardSupported;
+ (id)sharedVirtualCaptureCard;

- (long long)capacity;
- (void)dealloc;
- (long long)freeSpace;
- (id)init;
- (bool)setCapacity:(long long)arg1 error:(id*)arg2;
- (void)showSystemUserInterface;

@end
