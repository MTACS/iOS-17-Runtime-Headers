
@protocol GEOCompletion <NSObject>

@required

- (NSArray *)groups;
- (GEOAutocompleteSessionData *)sessionData;

@end
