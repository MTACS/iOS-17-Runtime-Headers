
@interface CVAVideoPipelineLibrarySPI : NSObject

+ (id)portraitRequestWithBackground:(id)arg1 light:(id)arg2 post:(id)arg3 isTmpConfig:(bool)arg4 error:(id*)arg5;
+ (bool)updateRequestWithLiveData:(id)arg1 mattingRequest:(id)arg2 faceKitProcessOutput:(id)arg3 error:(id*)arg4;

@end
