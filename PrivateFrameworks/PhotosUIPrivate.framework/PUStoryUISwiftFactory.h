
@interface PUStoryUISwiftFactory : NSObject <PXStoryUISwiftFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)thumbnailActionPerformerWithModel:(id)arg1;
+ (id)viewControllerWithConfiguration:(id)arg1 contentViewController:(out id*)arg2;

@end
