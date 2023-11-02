
@interface WFTrelloAccessResource : WFAccountAccessResource

@property (nonatomic, readonly, copy) NSArray *accounts;

+ (id)userInterfaceClasses;
+ (id)userInterfaceProtocol;

- (Class)accountClass;
- (id)associatedAppIdentifier;
- (void)makeAvailableWithRemoteInterface:(id)arg1 completionHandler:(id /* block */)arg2;

@end
