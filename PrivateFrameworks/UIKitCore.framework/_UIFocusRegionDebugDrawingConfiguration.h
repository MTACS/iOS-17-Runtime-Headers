
@interface _UIFocusRegionDebugDrawingConfiguration : NSObject {
    id  _associatedObject;
    UIColor * _color;
    bool  _dashedStroke;
    struct CGPattern { } * _pattern;
    double  _patternAlpha;
}

@property (nonatomic, readonly) id associatedObject;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) bool dashedStroke;
@property (nonatomic, readonly) struct CGPattern { }*pattern;
@property (nonatomic, readonly) double patternAlpha;

+ (id)containerGuideConfigurationForRegion:(id)arg1;
+ (id)guideConfigurationForRegion:(id)arg1;
+ (id)itemConfigurationForRegion:(id)arg1;
+ (id)promiseConfigurationForRegion:(id)arg1;

- (void).cxx_destruct;
- (id)associatedObject;
- (id)color;
- (bool)dashedStroke;
- (id)initWithRegion:(id)arg1 baseHue:(double)arg2 patternAlpha:(double)arg3 dashedStroke:(bool)arg4;
- (struct CGPattern { }*)pattern;
- (double)patternAlpha;

@end
