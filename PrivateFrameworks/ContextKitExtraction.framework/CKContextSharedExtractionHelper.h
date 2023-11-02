
@interface CKContextSharedExtractionHelper : NSObject

+ (bool)_isRelevantForExtractionWithView:(id)arg1;
+ (id)bestContentStringForWebViewUIElements:(id)arg1 andTitle:(id)arg2;
+ (id)bestImageForView:(id)arg1;
+ (id)blocksFromText:(id)arg1;
+ (void)descendantsRelevantForContentExtractionFromView:(id)arg1 intoArray:(id)arg2;
+ (bool)elementIsOnScreenWithView:(id)arg1 window:(id)arg2;
+ (bool)textBlockLooksLikeAListWithText:(id)arg1;
+ (id)webPageNodeExtractionJavaScript;

@end
