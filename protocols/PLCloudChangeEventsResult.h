
@protocol PLCloudChangeEventsResult <NSObject>

@required

- (NSString *)currentTokenDescription;
- (void)enumerateLocalEventsWithBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, bool*, void*
- (long long)resultType;

@end
