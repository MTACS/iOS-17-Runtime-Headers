
@interface WFDropboxAccessResource : WFAccountAccessResource

@property (nonatomic, readonly, copy) NSArray *accounts;

- (Class)accountClass;
- (id)associatedAppIdentifier;
- (id)initWithDefinition:(id)arg1;
- (void)makeAvailableWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;

@end
