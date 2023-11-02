
@interface SBSceneHostingDisplayPreferences : NSObject <NSCopying> {
    CADisplayModeCriteria * _CADisplayModeCriteria;
    double  _contentsScale;
    FBSDisplayConfigurationRequest * _displayConfigurationRequest;
    bool  _keepOtherModes;
    struct CGSize { 
        double width; 
        double height; 
    }  _logicalScale;
}

@property (nonatomic, readonly) CADisplayModeCriteria *CADisplayModeCriteria;
@property (nonatomic, readonly) double contentsScale;
@property (nonatomic, readonly) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property (nonatomic, readonly) bool keepOtherModes;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } logicalScale;

- (void).cxx_destruct;
- (id)CADisplayModeCriteria;
- (double)contentsScale;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayConfigurationRequest;
- (id)initWithDisplayConfigurationRequest:(id)arg1 logicalScale:(struct CGSize { double x1; double x2; })arg2 contentsScale:(double)arg3 keepOtherModes:(bool)arg4;
- (bool)keepOtherModes;
- (struct CGSize { double x1; double x2; })logicalScale;

@end
