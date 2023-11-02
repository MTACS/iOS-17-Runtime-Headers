
@interface CAMCinematicFocusCommand : CAMCaptureCommand {
    long long  __metadataObjectID;
    struct CGPoint { 
        double x; 
        double y; 
    }  __pointOfInterest;
    bool  __useFixedOpticalFocus;
    bool  __useHardFocus;
}

@property (nonatomic, readonly) long long _metadataObjectID;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } _pointOfInterest;
@property (nonatomic, readonly) bool _useFixedOpticalFocus;
@property (nonatomic, readonly) bool _useHardFocus;

- (long long)_metadataObjectID;
- (struct CGPoint { double x1; double x2; })_pointOfInterest;
- (bool)_useFixedOpticalFocus;
- (bool)_useHardFocus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithMetadataObjectID:(long long)arg1 atPointOfInterest:(struct CGPoint { double x1; double x2; })arg2 useFixedOpticalFocus:(bool)arg3 useHardFocus:(bool)arg4;

@end
