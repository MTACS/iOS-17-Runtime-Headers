
@protocol PXStoryUISwiftFactory <NSObject>

@required

+ (NSObject<PXStoryThumbnailActionPerformer> *)thumbnailActionPerformerWithModel:(PXStoryModel *)arg1;
+ (UIViewController *)viewControllerWithConfiguration:(PXStoryConfiguration *)arg1 contentViewController:(out id*)arg2;

@end
