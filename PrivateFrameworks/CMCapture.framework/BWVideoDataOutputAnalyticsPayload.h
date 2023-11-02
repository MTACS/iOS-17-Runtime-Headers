
@interface BWVideoDataOutputAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    NSString * _clientApplicationID;
    int  _colorSpace;
    int  _deviceMask;
    int  _devicePosition;
    double  _duration;
    bool  _hdrVideo;
    int  _height;
    float  _nominalFramerate;
    unsigned long long  _numberOfFrames;
    unsigned long long  _numberOfFramesDropped;
    unsigned long long  _numberOfISPFramesDropped;
    bool  _proresVideo;
    bool  _videoMirrored;
    int  _width;
}

@property (nonatomic, copy) NSString *clientApplicationID;
@property (nonatomic) int colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceMask;
@property (nonatomic) int devicePosition;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hdrVideo;
@property (nonatomic) int height;
@property (nonatomic) float nominalFramerate;
@property (nonatomic) unsigned long long numberOfFrames;
@property (nonatomic) unsigned long long numberOfFramesDropped;
@property (nonatomic) unsigned long long numberOfISPFramesDropped;
@property (nonatomic) bool proresVideo;
@property (readonly) Class superclass;
@property (nonatomic) bool videoMirrored;
@property (nonatomic) int width;

- (id)clientApplicationID;
- (int)colorSpace;
- (void)dealloc;
- (int)deviceMask;
- (int)devicePosition;
- (double)duration;
- (id)eventDictionary;
- (id)eventName;
- (bool)hdrVideo;
- (int)height;
- (id)init;
- (float)nominalFramerate;
- (unsigned long long)numberOfFrames;
- (unsigned long long)numberOfFramesDropped;
- (unsigned long long)numberOfISPFramesDropped;
- (bool)proresVideo;
- (void)reset;
- (void)setClientApplicationID:(id)arg1;
- (void)setColorSpace:(int)arg1;
- (void)setDeviceMask:(int)arg1;
- (void)setDevicePosition:(int)arg1;
- (void)setDuration:(double)arg1;
- (void)setHdrVideo:(bool)arg1;
- (void)setHeight:(int)arg1;
- (void)setNominalFramerate:(float)arg1;
- (void)setNumberOfFrames:(unsigned long long)arg1;
- (void)setNumberOfFramesDropped:(unsigned long long)arg1;
- (void)setNumberOfISPFramesDropped:(unsigned long long)arg1;
- (void)setProresVideo:(bool)arg1;
- (void)setVideoMirrored:(bool)arg1;
- (void)setWidth:(int)arg1;
- (bool)videoMirrored;
- (int)width;

@end
