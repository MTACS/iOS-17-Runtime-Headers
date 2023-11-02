
@interface _UIStatusBarRegionAxisStackingLayout : NSObject <_UIStatusBarRegionAxisLayout> {
    long long  _alignment;
    bool  _hugging;
    double  _interspace;
}

@property (nonatomic) long long alignment;
@property (nonatomic, readonly) bool canOverflowItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hugging;
@property (nonatomic) double interspace;
@property (readonly) Class superclass;

- (long long)alignment;
- (bool)canOverflowItems;
- (id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4;
- (bool)hugging;
- (double)interspace;
- (void)setAlignment:(long long)arg1;
- (void)setHugging:(bool)arg1;
- (void)setInterspace:(double)arg1;

@end
