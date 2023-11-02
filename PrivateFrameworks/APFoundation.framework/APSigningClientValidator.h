
@interface APSigningClientValidator : NSObject

+ (bool)_validateAllowListingForPoolCreation:(id)arg1;
+ (bool)hasEntitlement:(id)arg1;
+ (bool)isAllowedClient;
+ (id)mockXPCObject;
+ (void)setMockXPCObject:(id)arg1;

@end
