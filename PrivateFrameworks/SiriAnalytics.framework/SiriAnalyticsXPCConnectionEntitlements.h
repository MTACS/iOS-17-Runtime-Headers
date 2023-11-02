
@interface SiriAnalyticsXPCConnectionEntitlements : NSObject {
    NSArray * _extendedEntitlements;
    bool  _genericEntitlement;
    bool  _pluginState;
    bool  _publishUnorderedMessages;
    bool  _runtimeIntrospection;
    bool  _runtimeManagement;
    bool  _unifiedMessageStreamReadOnlyAccess;
}

@property (nonatomic, readonly) NSArray *extendedEntitlements;
@property (getter=hasGenericEntitlement, nonatomic, readonly) bool genericEntitlement;
@property (getter=hasPluginState, nonatomic, readonly) bool pluginState;
@property (getter=canPublishUnordered, nonatomic, readonly) bool publishUnorderedMessages;
@property (getter=hasRuntimeIntrospection, nonatomic, readonly) bool runtimeIntrospection;
@property (getter=hasRuntimeManagement, nonatomic, readonly) bool runtimeManagement;
@property (getter=hasUnifiedMessageStreamReadOnlyAccess, nonatomic, readonly) bool unifiedMessageStreamReadOnlyAccess;

- (void).cxx_destruct;
- (bool)canPublishUnordered;
- (id)extendedEntitlements;
- (bool)hasGenericEntitlement;
- (bool)hasPluginState;
- (bool)hasRuntimeIntrospection;
- (bool)hasRuntimeManagement;
- (bool)hasUnifiedMessageStreamReadOnlyAccess;
- (id)initWithEntitlements:(id)arg1;

@end
