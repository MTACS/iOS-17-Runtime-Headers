
@interface PXStoryCompanionTimelineRequest : NSObject

+ (id)_createCompanionTimelineFromModel:(id)arg1;
+ (bool)_transformConfiguration:(id)arg1 intoStoryConfiguration:(out id*)arg2 extendedTraitCollection:(out id*)arg3 error:(out id*)arg4;
+ (void)_waitForFinalTimelineWithProgress:(id)arg1 model:(id)arg2 resultHandler:(id /* block */)arg3;
+ (id)requestTimelineWithConfiguration:(id)arg1 resultHandler:(id /* block */)arg2;

- (id)init;

@end
