
@interface CBDigitizerFilter : CBFilter {
    long long  _behavior;
    bool  _firstDigitizerEvent;
    CBDigitizerHotspot * _hotspot;
    bool  _isActive;
    int  _orientation;
    struct CBDigitizerFilterTouchProperties { 
        float digitizerWidth; 
        float digitizerHeight; 
        float deviceCenterX; 
        float deviceCenterY; 
        float touchHotSpotSquared; 
    }  _props;
}

@property (nonatomic) bool isActive;
@property (nonatomic, readonly) int orientation;

+ (struct CBDigitizerFilterTouchProperties { float x1; float x2; float x3; float x4; float x5; })loadTouchProperties:(struct __IOHIDServiceClient { }*)arg1;

- (void)dealloc;
- (id)filterEvent:(id)arg1;
- (id)handleALSEvent:(id)arg1;
- (id)handleDigitizerEvent:(id)arg1;
- (id)initWithALSNode:(id)arg1 andLogCategory:(const char *)arg2;
- (bool)isActive;
- (bool)isObstructed;
- (bool)isObstructedIgnoreActive;
- (id)newHospotForLocationX:(float)arg1 andY:(float)arg2;
- (id)newHotspot;
- (id)newHotspotForOrientation;
- (int)orientation;
- (void)overrideHotspotWithCenterX:(float)arg1 andCenterY:(float)arg2;
- (void)setIsActive:(bool)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setTriggered:(long long)arg1 forHotspot:(id)arg2;

@end
