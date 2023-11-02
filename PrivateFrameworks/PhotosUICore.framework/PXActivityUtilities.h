
@interface PXActivityUtilities : NSObject

+ (id)_initialsFromGivenName:(id)arg1 familyName:(id)arg2;
+ (void)_requestContactMatchingEmail:(id)arg1 orPhone:(id)arg2 withFirstName:(id)arg3 lastName:(id)arg4 keysToFetch:(id)arg5 withCompletion:(id /* block */)arg6;
+ (void)_requestImageForContact:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3 isRTL:(bool)arg4 deliverOnce:(bool)arg5 completion:(id /* block */)arg6;
+ (void)_requestPlaceholderMonogramWithTargetSize:(struct CGSize { double x1; double x2; })arg1 displayScale:(double)arg2 completion:(id /* block */)arg3;
+ (void)requestImageForContact:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3 isRTL:(bool)arg4 deliverOnce:(bool)arg5 completion:(id /* block */)arg6;
+ (void)requestImageFromPeopleAlbumForPerson:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3 highQualityFormat:(bool)arg4 completion:(id /* block */)arg5;
+ (void)requestMeContactForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)requestMeContactWithCompletion:(id /* block */)arg1;
+ (void)requestMonogramForEmailAddress:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3 isRTL:(bool)arg4 completion:(id /* block */)arg5;
+ (void)requestMonogramForGivenName:(id)arg1 familyName:(id)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 displayScale:(double)arg4 isRTL:(bool)arg5 completion:(id /* block */)arg6;
+ (void)requestPersonImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 displayScale:(double)arg2 isRTL:(bool)arg3 matchingEmail:(id)arg4 orPhone:(id)arg5 withFirstName:(id)arg6 lastName:(id)arg7 prefersPhotosImage:(bool)arg8 withCompletion:(id /* block */)arg9;
+ (id)sharedWorkQueue;
+ (id)textForDate:(id)arg1;

@end
