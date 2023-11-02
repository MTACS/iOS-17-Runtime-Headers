
@interface PHLimitedLibraryPicker : NSObject

+ (id)firstKeyWindow:(id)arg1;
+ (void)presentLimitedLibraryPicker:(id)arg1 waitForDismissal:(bool)arg2;
+ (void)presentLimitedLibraryPicker:(id)arg1 waitForDismissal:(bool)arg2 viewController:(id)arg3 photoLibrary:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)presentLimitedLibraryPickerFromViewController:(id)arg1 options:(id)arg2;
+ (void)presentLimitedLibraryPickerFromViewController:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)topmostPresentedViewController:(id)arg1;

@end
