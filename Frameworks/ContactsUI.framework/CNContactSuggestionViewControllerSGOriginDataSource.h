
@interface CNContactSuggestionViewControllerSGOriginDataSource : NSObject <CNContactSuggestionViewControllerDataSource> {
    SGOrigin * _origin;
}

@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) NSString *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSAttributedString *formattedSnippet;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SGOrigin *origin;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *with;

+ (id)contactSuggestionTypeBySuggestionType;
+ (id)dateFormatter;

- (void).cxx_destruct;
- (id)appName;
- (id)contactNameFromPerson:(id)arg1;
- (id)date;
- (id)formattedSnippet;
- (id)initWithSGOrigin:(id)arg1;
- (id)origin;
- (void)setOrigin:(id)arg1;
- (id)title;
- (unsigned long long)type;
- (id)url;
- (id)with;

@end
