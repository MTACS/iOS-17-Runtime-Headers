
@interface BFFFinishSetupFlowItemDispositionProvider : NSObject <BYFlowItemDispositionProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long dispositions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)dispositions;

@end
