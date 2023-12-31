
@interface VSSAMLRequestFactory : NSObject

+ (id)attributeQueryWithAttributeNames:(id)arg1 channelID:(id)arg2 authNResponse:(id)arg3 error:(id*)arg4;
+ (id)authNRequestWithResponse:(id)arg1 forced:(bool)arg2 error:(id*)arg3;
+ (id)logoutRequestWithError:(id*)arg1;

@end
