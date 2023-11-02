
@interface PUPhotoEditTaskManager : NSObject

+ (id)sharedManager;

- (void)createEditableCopyForReadOnlyPhoto:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;

@end
