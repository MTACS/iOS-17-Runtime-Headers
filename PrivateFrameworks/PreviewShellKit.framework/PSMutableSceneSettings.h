
@interface PSMutableSceneSettings : NSObject {
    UVMutablePreviewSceneSettings * _settings;
}

@property (nonatomic, readonly) UVMutablePreviewSceneSettings *settings;

- (void).cxx_destruct;
- (id)initWithSettings:(id)arg1;
- (id)settings;

@end
