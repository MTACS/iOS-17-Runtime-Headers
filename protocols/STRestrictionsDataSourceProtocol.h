
@protocol STRestrictionsDataSourceProtocol <NSObject>

@required

- (id)defaultValueForRestrictionIdentifier:(NSString *)arg1;
- (void)loadValuesByRestrictionWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
