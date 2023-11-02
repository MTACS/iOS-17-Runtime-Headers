
@interface UISceneWindowingBehaviors : NSObject

@property (getter=isClosable, nonatomic) bool closable;
@property (getter=isMiniaturizable, nonatomic) bool miniaturizable;

- (bool)isClosable;
- (bool)isMiniaturizable;
- (void)setClosable:(bool)arg1;
- (void)setMiniaturizable:(bool)arg1;

@end
