
@protocol WFTriggerListener <NSObject>

@required

- (void)checkTriggerStateWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)checkTriggerStateWithKeyPath:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)fireTriggerWithIdentifier:(void *)arg1 force:(void *)arg2 eventInfo:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, bool, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)registerConfiguredTrigger:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: WFConfiguredTrigger *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)unregisterConfiguredTriggerWithIdentifier:(NSString *)arg1;

@end
