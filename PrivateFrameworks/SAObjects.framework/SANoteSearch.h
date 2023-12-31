
@interface SANoteSearch : SADomainCommand

@property (nonatomic, copy) NSString *contentQuery;
@property (nonatomic, copy) NSDate *fromDate;
@property (nonatomic, copy) NSDate *toDate;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)contentQuery;
- (id)encodedClassName;
- (id)fromDate;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setContentQuery:(id)arg1;
- (void)setFromDate:(id)arg1;
- (void)setToDate:(id)arg1;
- (id)toDate;

@end
