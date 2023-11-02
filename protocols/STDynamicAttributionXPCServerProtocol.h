
@protocol STDynamicAttributionXPCServerProtocol <NSObject>

@required

- (void)setCurrentAttributionKey:(void *)arg1 application:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setCurrentAttributionLocalizableKey:(void *)arg1 maskingClientAuditToken:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, struct { unsigned int x1[8]; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setCurrentAttributionStringWithFormat:(void *)arg1 maskingClientAuditToken:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, struct { unsigned int x1[8]; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setCurrentAttributionWebsiteString:(void *)arg1 maskingClientAuditToken:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, struct { unsigned int x1[8]; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)subscribeToUpdates;

@end
