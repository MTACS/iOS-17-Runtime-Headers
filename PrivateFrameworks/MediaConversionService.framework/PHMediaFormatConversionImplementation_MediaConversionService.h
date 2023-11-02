
@interface PHMediaFormatConversionImplementation_MediaConversionService : NSObject <PHMediaFormatConversionImplementation> {
    PAImageConversionServiceClient * _imageConversionServiceClient;
    PAVideoConversionServiceClient * _videoConversionServiceClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) PAImageConversionServiceClient *imageConversionServiceClient;
@property (readonly) Class superclass;
@property (readonly) long long transferBehaviorUserPreference;
@property (readonly) NSSet *ut_objectsToBeDeallocatedWithReceiver;
@property (retain) PAVideoConversionServiceClient *videoConversionServiceClient;

- (void).cxx_destruct;
- (void)applyCommonOptionsFromRequest:(id)arg1 toOptions:(id)arg2;
- (void)applyCommonOptionsFromVideoRequest:(id)arg1 toOptions:(id)arg2;
- (void)dealloc;
- (id)imageConversionServiceClient;
- (id)init;
- (void)performConversionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performImageConversionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performVideoConversionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setImageConversionServiceClient:(id)arg1;
- (void)setVideoConversionServiceClient:(id)arg1;
- (id)submitNonSinglePassVideoConversionRequest:(id)arg1 destination:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)submitSinglePassVideoConversionRequest:(id)arg1 destination:(id)arg2 completionHandler:(id /* block */)arg3;
- (long long)transferBehaviorUserPreference;
- (id)ut_objectsToBeDeallocatedWithReceiver;
- (id)videoConversionServiceClient;

@end
