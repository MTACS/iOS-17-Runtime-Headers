
@interface STUIStatusBarRegionAxisAligningLayout : NSObject <STUIStatusBarRegionAxisLayout> {
    long long  _alignment;
}

@property (nonatomic) long long alignment;
@property (nonatomic, readonly) bool canOverflowItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)aligningLayoutWithAlignment:(long long)arg1;

- (long long)alignment;
- (bool)canOverflowItems;
- (id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4;
- (void)setAlignment:(long long)arg1;

@end
