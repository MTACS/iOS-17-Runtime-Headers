
@protocol ANXPCManagerDelegate

@required

- (void)managerDidInterruptConnection:(ANXPCManager *)arg1;
- (void)managerDidInvalidateConnection:(ANXPCManager *)arg1;

@end
