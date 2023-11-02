
@interface WKWallpaperAdjustmentTraitOffset : NSObject <NAIdentifiable> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _moreSpaceModeOffsetLandscape;
    struct CGPoint { 
        double x; 
        double y; 
    }  _moreSpaceModeOffsetPortrait;
    NSString * _overrideScreenScaleMode;
    struct CGPoint { 
        double x; 
        double y; 
    }  _zoomedModeOffsetLandscape;
    struct CGPoint { 
        double x; 
        double y; 
    }  _zoomedModeOffsetPortrait;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } moreSpaceModeOffsetLandscape;
@property (nonatomic) struct CGPoint { double x1; double x2; } moreSpaceModeOffsetPortrait;
@property (nonatomic, copy) NSString *overrideScreenScaleMode;
@property (readonly) Class superclass;
@property (nonatomic) struct CGPoint { double x1; double x2; } zoomedModeOffsetLandscape;
@property (nonatomic) struct CGPoint { double x1; double x2; } zoomedModeOffsetPortrait;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id /* block */)descriptionBuilderBlock;
- (unsigned long long)hash;
- (id)initWithAttributeDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })moreSpaceModeOffsetLandscape;
- (struct CGPoint { double x1; double x2; })moreSpaceModeOffsetPortrait;
- (struct CGPoint { double x1; double x2; })offsetForCurrentScreenScaleModeWithInterfaceOrientation:(long long)arg1;
- (id)overrideScreenScaleMode;
- (id)propertyListRepresentation;
- (void)setMoreSpaceModeOffsetLandscape:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMoreSpaceModeOffsetPortrait:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOverrideScreenScaleMode:(id)arg1;
- (void)setZoomedModeOffsetLandscape:(struct CGPoint { double x1; double x2; })arg1;
- (void)setZoomedModeOffsetPortrait:(struct CGPoint { double x1; double x2; })arg1;
- (id)wk_descriptionBuilder;
- (struct CGPoint { double x1; double x2; })zoomedModeOffsetLandscape;
- (struct CGPoint { double x1; double x2; })zoomedModeOffsetPortrait;

@end
