
@interface SUSReleaseNotesProcessor : NSObject

+ (id)sharedInstance;

- (id)normalizeHtmlReleaseNotes:(id)arg1;
- (id)normalizeHtmlReleaseNotes:(id)arg1 withAdditionalCSS:(id)arg2;

@end
