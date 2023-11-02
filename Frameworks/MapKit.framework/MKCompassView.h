
@interface MKCompassView : UIView <MKCompassView> {
    UIImageView * _assetImageView;
    NSArray * _compassPointLocalizedAbbreviations;
    long long  _compassViewSize;
    long long  _compassViewStyle;
    UIImageView * _containerImageView;
    int  _lastDrawnCompassDirection;
}

@property (nonatomic, readonly) long long compassViewSize;
@property (nonatomic, readonly) long long compassViewStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double mapHeading;
@property (readonly) Class superclass;
@property (nonatomic) double yaw;

+ (id)_parameterForSize:(long long)arg1;
+ (id)_parameterForStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)_adaptCompassStyleToUserInterfaceStyle;
- (void)_commonInit;
- (id)_compassDirectionImageForKey:(id)arg1 sizeParams:(id)arg2 styleParams:(id)arg3 scale:(double)arg4;
- (void)_populateCompassPointLocalizedAbbreviationsArray;
- (void)_setupImageView:(id)arg1;
- (void)_updateImageForCompassDirection:(int)arg1;
- (void)_updateLayerForCurrentSizeAndStyle;
- (void)_updateStyle;
- (long long)compassViewSize;
- (long long)compassViewStyle;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isPointInNorthEastHalf:(struct CGPoint { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (double)mapHeading;
- (void)movedToWindow:(id)arg1;
- (void)setCompassViewSize:(long long)arg1;
- (void)setCompassViewSize:(long long)arg1 style:(long long)arg2;
- (void)setMapHeading:(double)arg1;
- (void)setYaw:(double)arg1;
- (id)stringForCompassPoint:(int)arg1;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;
- (void)updateLocale:(id)arg1;
- (double)yaw;

@end
