
@interface _PSCNAutocompleteFeedbackProcessingTask : NSObject

+ (id)bookmarkFileNameForImplicit:(bool)arg1;
+ (id)bundleIDsToProcess;
+ (id)loadBookmarkTimeOverImplicit:(bool)arg1 from:(id)arg2;
+ (void)persistBookmarkTime:(id)arg1 overImplicit:(bool)arg2 to:(id)arg3;
+ (void)runOverExplicit;
+ (void)runOverImplicit;
+ (void)runWithInferredEnterAndExit:(bool)arg1 overImplicit:(bool)arg2 eventFilter:(id /* block */)arg3;
+ (id)sourceBundleIDsToIgnore;

- (void)execute;

@end
