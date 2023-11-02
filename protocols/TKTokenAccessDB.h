
@protocol TKTokenAccessDB <NSObject>

@required

- (void)clearAllAccessRecords;
- (long long)fetchAccessForRequest:(TKTokenAccessRequest *)arg1;
- (void)storeAccess:(long long)arg1 forRequest:(TKTokenAccessRequest *)arg2;

@end
