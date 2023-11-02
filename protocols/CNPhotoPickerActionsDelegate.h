
@protocol CNPhotoPickerActionsDelegate <NSObject>

@required

- (void)actionsModel:(CNPhotoPickerActionsModel *)arg1 didAssignToContact:(CNPhotoPickerProviderItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)actionsModel:(CNPhotoPickerActionsModel *)arg1 didDelete:(CNPhotoPickerProviderItem *)arg2 atIndexPath:(NSIndexPath *)arg3 withSourceView:(UIView *)arg4;
- (void)actionsModel:(void *)arg1 didDuplicate:(void *)arg2 atIndexPath:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 8: CNPhotoPickerActionsModel *, CNPhotoPickerProviderItem *, NSIndexPath *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)actionsModel:(CNPhotoPickerActionsModel *)arg1 didEdit:(CNPhotoPickerProviderItem *)arg2 atIndexPath:(NSIndexPath *)arg3;

@end
