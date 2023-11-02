
@interface _ANEErrors : NSObject

+ (id)createErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)entitlementErrorForMethod:(id)arg1;
+ (id)fileAccessErrorForMethod:(id)arg1;
+ (id)fileNotFoundErrorForMethod:(id)arg1;
+ (id)invalidModelErrorForMethod:(id)arg1;
+ (id)invalidModelKeyErrorForMethod:(id)arg1;
+ (id)missingCodeSigningErrorForMethod:(id)arg1;
+ (id)priorityErrorForMethod:(id)arg1;
+ (id)programChainingPrepareErrorForMethod:(id)arg1;
+ (id)programCreationErrorForMethod:(id)arg1;
+ (id)programIOSurfacesMapErrorForMethod:(id)arg1 code:(long long)arg2;
+ (id)programIOSurfacesUnmapErrorForMethod:(id)arg1 code:(long long)arg2;
+ (id)programInferenceOtherErrorForMethod:(id)arg1;
+ (id)programInferenceOverflowErrorForMethod:(id)arg1;
+ (id)programLoadErrorForMethod:(id)arg1;
+ (id)programLoadErrorForMethod:(id)arg1 code:(long long)arg2;
+ (id)systemModelPurgeNotAllowedForMethod:(id)arg1;
+ (id)timeoutErrorForMethod:(id)arg1;

@end
