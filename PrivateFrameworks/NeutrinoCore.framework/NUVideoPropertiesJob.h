
@interface NUVideoPropertiesJob : NURenderJob {
    <NUVideoProperties> * _videoProperties;
}

- (void).cxx_destruct;
- (bool)prepare:(out id*)arg1;
- (id)result;
- (bool)wantsCompleteStage;
- (bool)wantsRenderStage;

@end
