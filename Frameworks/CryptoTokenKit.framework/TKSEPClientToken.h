
@interface TKSEPClientToken : TKClientToken

+ (id)builtinTokenIDs;
+ (bool)handlesTokenID:(id)arg1;

- (id)initWithTokenID:(id)arg1 serverEndpoint:(id)arg2 targetUID:(id)arg3;

@end
