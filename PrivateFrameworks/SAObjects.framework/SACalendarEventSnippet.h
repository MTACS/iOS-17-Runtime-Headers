
@interface SACalendarEventSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *events;
@property (nonatomic, copy) NSDate *snippetEndDate;
@property (nonatomic, copy) NSDate *snippetStartDate;
@property (nonatomic, copy) NSString *timeZoneId;

+ (id)eventSnippet;
+ (id)eventSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)events;
- (id)groupIdentifier;
- (void)setEvents:(id)arg1;
- (void)setSnippetEndDate:(id)arg1;
- (void)setSnippetStartDate:(id)arg1;
- (void)setTimeZoneId:(id)arg1;
- (id)snippetEndDate;
- (id)snippetStartDate;
- (id)timeZoneId;

@end
