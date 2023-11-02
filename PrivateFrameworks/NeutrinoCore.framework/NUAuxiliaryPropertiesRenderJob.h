
@interface NUAuxiliaryPropertiesRenderJob : NURenderJob {
    <NUImageProperties> * _imageProperties;
}

- (void).cxx_destruct;
- (bool)prepare:(out id*)arg1;
- (id)result;
- (bool)wantsCompleteStage;
- (bool)wantsRenderStage;

@end
