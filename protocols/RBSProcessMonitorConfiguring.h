
@protocol RBSProcessMonitorConfiguring

@required

- (void)setEvents:(unsigned long long)arg1;
- (void)setPredicates:(NSArray *)arg1;
- (void)setPreventLaunchUpdateHandle:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RBSProcessMonitor *, NSSet *, void*
- (void)setServiceClass:(unsigned int)arg1;
- (void)setStateDescriptor:(RBSProcessStateDescriptor *)arg1;
- (void)setUpdateHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RBSProcessMonitor *, RBSProcessHandle *, RBSProcessStateUpdate *, void*

@end
