
@interface _NTKCompoundKeylineImageView : _NTKKeylineImageView <NTKKeylineView> {
    UIView<NTKKeylineView> * _secondaryKeylineView;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *overrideColor;
@property (nonatomic, retain) UIView<NTKKeylineView> *secondaryKeylineView;
@property (readonly) Class superclass;
@property (nonatomic, retain) NTKKeylineTouchable *touchable;
@property (nonatomic) bool usesLegibility;

+ (id)keylineWithImage:(id)arg1 secondaryKeylineView:(id)arg2;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)secondaryKeylineView;
- (void)setColor:(id)arg1;
- (void)setOverrideColor:(id)arg1;
- (void)setSecondaryKeylineView:(id)arg1;
- (void)setUsesLegibility:(bool)arg1;

@end
