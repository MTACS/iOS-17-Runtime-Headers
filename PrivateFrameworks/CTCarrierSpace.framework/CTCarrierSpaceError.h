
@interface CTCarrierSpaceError : NSObject

+ (id)errorForCode:(long long)arg1;
+ (id)errorForCode:(long long)arg1 subdomain:(long long)arg2 subdomainError:(long long)arg3;
+ (id)errorForCode:(long long)arg1 withDescription:(id)arg2;

@end