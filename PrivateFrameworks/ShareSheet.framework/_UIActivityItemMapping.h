
@interface _UIActivityItemMapping : NSObject

+ (id)_activeActivityViewControllers;
+ (id)_activityViewControllerForActivityItem:(id)arg1;
+ (void)_addActivityItem:(id)arg1 activityViewController:(id)arg2 originalActivityItem:(id)arg3;
+ (void)_addToActiveActivityViewControllers:(id)arg1;
+ (id)_attachmentNameForActivityItem:(id)arg1 activityType:(id)arg2;
+ (bool)_canLoadMetadataForActivityItem:(id)arg1;
+ (void)_clearActivityItems:(id)arg1;
+ (id)_dataTypeIdentifierForActivityItem:(id)arg1 activityType:(id)arg2;
+ (id)_itemProviderForActivityItem:(id)arg1 typeIdentifier:(id)arg2 thumbnailSize:(struct CGSize { double x1; double x2; })arg3 activityType:(id)arg4;
+ (id)_loadMetadataForActivityItem:(id)arg1 activityViewController:(id)arg2;
+ (id)_openURLAnnotationForActivityItem:(id)arg1 activityType:(id)arg2;
+ (id)_originalActivityItemForActivityItem:(id)arg1;
+ (void)_removeFromActiveActivityViewControllers:(id)arg1;
+ (id)_subjectForActivityItem:(id)arg1 activityType:(id)arg2;
+ (id)_thumbnailImageDataForActivityItem:(id)arg1 thumbnailSize:(struct CGSize { double x1; double x2; })arg2 activityType:(id)arg3;
+ (id)_thumbnailImageForActivityItem:(id)arg1 thumbnailSize:(struct CGSize { double x1; double x2; })arg2 activityType:(id)arg3;
+ (void)initialize;

@end
