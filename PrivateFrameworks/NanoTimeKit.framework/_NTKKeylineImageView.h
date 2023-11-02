
@interface _NTKKeylineImageView : CLKUIColoringImageView <NTKKeylineView> {
    id /* block */  _colorizationBlock;
    NTKKeylineTouchable * touchable;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, copy) id /* block */ colorizationBlock;
@property (nonatomic, readonly) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *overrideColor;
@property (readonly) Class superclass;
@property (nonatomic, retain) NTKKeylineTouchable *touchable;
@property (nonatomic) bool usesLegibility;

- (void).cxx_destruct;
- (id /* block */)colorizationBlock;
- (void)setColor:(id)arg1;
- (void)setColorizationBlock:(id /* block */)arg1;
- (void)setTouchable:(id)arg1;
- (id)touchable;

@end
