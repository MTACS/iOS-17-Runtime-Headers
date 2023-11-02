
@protocol HIDPreferencesProtocol <NSObject>

@required

- (void)copy:(void *)arg1 user:(void *)arg2 host:(void *)arg3 domain:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (void)copyDomain:(void *)arg1 domain:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (void)copyMultiple:(void *)arg1 user:(void *)arg2 host:(void *)arg3 domain:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: NSArray *, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (void)set:(NSString *)arg1 value:(id)arg2 user:(NSString *)arg3 host:(NSString *)arg4 domain:(NSString *)arg5;
- (void)setDomain:(NSString *)arg1 value:(id)arg2 domain:(NSString *)arg3;
- (void)setMultiple:(NSDictionary *)arg1 keysToRemove:(NSArray *)arg2 user:(NSString *)arg3 host:(NSString *)arg4 domain:(NSString *)arg5;
- (void)synchronize:(NSString *)arg1 host:(NSString *)arg2 domain:(NSString *)arg3;

@end
