
@interface _TVControllerFactory : NSObject

- (id)_carouselControllerForElement:(id)arg1 layout:(id)arg2 existingController:(id)arg3;
- (id)_gridControllerForElement:(id)arg1 existingController:(id)arg2;
- (id)_listControllerForElement:(id)arg1 existingController:(id)arg2;
- (void)_registerControllerCreators;
- (id)_shelfControllerForElement:(id)arg1 existingController:(id)arg2;
- (id)_textFieldControllerForElement:(id)arg1 existingController:(id)arg2;
- (id)init;

@end
