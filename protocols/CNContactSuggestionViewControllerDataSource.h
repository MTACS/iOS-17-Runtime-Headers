
@protocol CNContactSuggestionViewControllerDataSource <NSObject>

@required

- (NSString *)appName;
- (NSString *)date;
- (NSAttributedString *)formattedSnippet;
- (NSString *)title;
- (unsigned long long)type;
- (NSURL *)url;
- (NSString *)with;

@end
