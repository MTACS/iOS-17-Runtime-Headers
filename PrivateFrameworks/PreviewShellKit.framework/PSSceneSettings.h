
@interface PSSceneSettings : NSObject {
    UVPreviewSceneSettings * _settings;
}

@property (nonatomic, readonly) UVPreviewSceneSettings *settings;

- (void).cxx_destruct;
- (id)initWithSettings:(id)arg1;
- (id)settings;

@end
