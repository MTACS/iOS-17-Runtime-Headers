
@interface AXAuditDocumentationManager : NSObject

+ (id)_appleDocViewerURLForWebDocURL:(id)arg1;
+ (id)_docTypeCatalystDictionary;
+ (id)_docTypeDictionary;
+ (id)_getOriginaliOSTitle:(id)arg1;
+ (id)_macOSToiOSTitleDictionary;
+ (id)appleDocURLForType:(long long)arg1;
+ (id)appleDocViewerURLs;
+ (long long)getAXDocumentationType:(id)arg1 isCatalyst:(bool)arg2;
+ (id)sharedManager;
+ (id)webDocURLForType:(long long)arg1;
+ (id)webpageURLs;

@end
