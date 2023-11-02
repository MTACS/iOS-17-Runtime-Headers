
@protocol NUSharableImage <NSObject>

@required

- (bool)decrementUseCount;
- (void)incrementUseCount;
- (bool)isInUse;
- (bool)isShared;
- (int)useCount;

@end
