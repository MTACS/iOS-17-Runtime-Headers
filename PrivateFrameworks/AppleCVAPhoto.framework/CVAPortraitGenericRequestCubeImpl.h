
@interface CVAPortraitGenericRequestCubeImpl : NSObject <CVAPortraitGenericRequest> {
    NSData * _cubeData;
    <CVAPortraitVideoPipeline> * _portraitVideoPipeline;
    struct __CVBuffer { } * _sourceColorPixelBuffer;
}

@property (retain) NSData *cubeData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) <CVAPortraitVideoPipeline> *portraitVideoPipeline;
@property struct __CVBuffer { }*sourceColorPixelBuffer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cubeData;
- (void)dealloc;
- (id)portraitVideoPipeline;
- (void)setCubeData:(id)arg1;
- (void)setPortraitVideoPipeline:(id)arg1;
- (void)setSourceColorPixelBuffer:(struct __CVBuffer { }*)arg1;
- (struct __CVBuffer { }*)sourceColorPixelBuffer;

@end
