
@interface SAVCSVendResultsToSearch : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *shelves;
@property (nonatomic, copy) NSString *title;

+ (id)vendResultsToSearch;
+ (id)vendResultsToSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setShelves:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)shelves;
- (id)title;

@end
