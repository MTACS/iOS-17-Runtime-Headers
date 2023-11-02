
@protocol FPUIActionControllerProtocol <NSObject>

@required

+ (id)actionControllerForActionIdentifier:(NSString *)arg1 actionTitle:(NSString *)arg2 items:(NSArray *)arg3 providerIdentifier:(NSString *)arg4 domainIdentifier:(NSString *)arg5;

- (NSString *)actionIdentifier;
- (NSString *)domainIdentifier;
- (NSArray *)items;
- (NSString *)providerIdentifier;

@end
