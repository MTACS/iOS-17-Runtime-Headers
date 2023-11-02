
@protocol MLRInternalTaskRepresenting <NSObject>

@required

- (NSArray *)MLRSandboxExtensionRequests;
- (bool)fetchDataIfNecessaryWithError:(id*)arg1;
- (id)performOnPlugin:(id <MLRTaskPerforming>)arg1 error:(id*)arg2;
- (NSString *)pluginID;
- (NSString *)taskID;

@end
