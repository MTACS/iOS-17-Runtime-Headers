
@interface FigCaptureSourceBackings : NSObject {
    FigCaptureSourceCommonSettings * _commonSettings;
    NSDictionary * _continuityCaptureCameraCapabilities;
    NSDictionary * _h264Settings;
    bool  _hasMicSource;
    NSDictionary * _hevcSettings;
    NSMutableArray * _sourceInfoDictionaries;
}

@property (nonatomic, readonly) FigCaptureSourceCommonSettings *commonSettings;
@property (nonatomic, readonly) NSDictionary *continuityCaptureCameraCapabilities;
@property (nonatomic, readonly) NSDictionary *h264Settings;
@property (nonatomic, readonly) NSDictionary *hevcSettings;
@property (nonatomic, readonly) NSArray *sourceInfoDictionaries;

+ (void)initialize;
+ (id)sharedCaptureSourceBackings;

- (void)addSourceInfoDictionaries:(id)arg1;
- (id)commonSettings;
- (id)continuityCaptureCameraCapabilities;
- (void)dealloc;
- (id)h264Settings;
- (id)hevcSettings;
- (id)initWithSourceInfoDictionaries:(id)arg1 commonSettings:(id)arg2 hevcSettings:(id)arg3 h264Settings:(id)arg4;
- (void)removeSourceInfoDictionaries:(id)arg1;
- (id)sourceInfoDictionaries;

@end
