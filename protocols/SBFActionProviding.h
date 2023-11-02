
@protocol SBFActionProviding <NSObject>

@required

- (void)addActionHandler:(id <SBFActionHandling>)arg1;
- (void)removeActionHandler:(id <SBFActionHandling>)arg1;

@end
