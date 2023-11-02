
@interface BCSError : NSError

+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 errorDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 errorDescription:(id)arg3 localizedDescription:(id)arg4;
+ (id)errorWithError:(id)arg1;

- (id)errorDescription;
- (id)initWithError:(id)arg1;
- (id)localizedDescription;

@end
