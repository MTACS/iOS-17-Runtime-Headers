
@protocol TUFilteredRequest <NSObject>

@required

- (NSString *)bundleIdentifier;
- (NSDictionary *)contactNamesByHandleWithContactsDataSource:(id <TUContactsDataSource>)arg1;
- (NSSet *)handles;

@end
