
@protocol HMTriggerConfiguration <NSObject>

@required

- (NSArray *)actionSets;
- (void)addActionSet:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: HMActionSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addActionSetOfType:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMActionSet *, NSError *, void*
- (void)addActionSetWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMActionSet *, NSError *, void*
- (NSString *)configuredName;
- (void)enable:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)isEnabled;
- (NSString *)name;
- (HMTriggerPolicy *)policy;
- (void)removeActionSet:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: HMActionSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removePolicy:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: HMTriggerPolicy *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateName:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateName:(void *)arg1 configuredName:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updatePolicy:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: HMTriggerPolicy *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
