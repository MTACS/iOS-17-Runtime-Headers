
@interface BWVideoStabilizationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    unsigned int  _averageLuxValue;
    int  _binningFactor;
    unsigned int  _count;
    int  _devicePosition;
    int  _height;
    float  _maxUIZoom;
    float  _minUIZoom;
    float  _overscanHistogram;
    NSString * _portType;
    float  _sigmaHistogram;
    float  _startingUIZoom;
    NSString * _videoType;
    int  _width;
}

@property (nonatomic) unsigned int averageLuxValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int devicePosition;
@property (readonly) unsigned long long hash;
@property (nonatomic) int height;
@property (nonatomic) float maxUIZoom;
@property (nonatomic) float minUIZoom;
@property (nonatomic) float startingUIZoom;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *videoType;
@property (nonatomic) int width;

- (unsigned int)averageLuxValue;
- (void)dealloc;
- (int)devicePosition;
- (id)eventDictionary;
- (id)eventName;
- (int)height;
- (id)init;
- (float)maxUIZoom;
- (float)minUIZoom;
- (void)reset;
- (void)setAverageLuxValue:(unsigned int)arg1;
- (void)setDevicePosition:(int)arg1;
- (void)setHeight:(int)arg1;
- (void)setMaxUIZoom:(float)arg1;
- (void)setMinUIZoom:(float)arg1;
- (void)setOverscanHistogram:(id)arg1 BinningFactor:(int)arg2 Histogram:(id)arg3;
- (void)setSigmaHistogram:(id)arg1;
- (void)setStartingUIZoom:(float)arg1;
- (void)setVideoType:(id)arg1;
- (void)setWidth:(int)arg1;
- (float)startingUIZoom;
- (id)videoType;
- (int)width;

@end
