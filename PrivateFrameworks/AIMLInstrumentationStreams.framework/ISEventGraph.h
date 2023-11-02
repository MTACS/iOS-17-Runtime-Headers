
@interface ISEventGraph : NSObject {
    void $__lazy_storage_$_componentIdentifierIndex;
    void $__lazy_storage_$_innerTypeIndex;
    void $__lazy_storage_$_typeAndCIDIndex;
    void $__lazy_storage_$_typeIndex;
    void eventsInternal;
    void timestamp;
}

@property (nonatomic, readonly) ISComponentGroup *asrBridge;
@property (nonatomic, readonly) NSSet *componentIdentifiersBridge;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) ISComponentGroup *nlxBridge;
@property (nonatomic, readonly) ISComponentGroup *orchBridge;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) ISComponentGroup *ueiBridge;

// Image: /System/Library/PrivateFrameworks/AIMLInstrumentationStreams.framework/AIMLInstrumentationStreams

- (void).cxx_destruct;
- (id)asrBridge;
- (id)componentIdentifiersBridge;
- (id)date;
- (id)getComponentGroupBridgeWithType:(Class)arg1;
- (id)getComponentGroupBridgesWithType:(Class)arg1;
- (id)init;
- (id)nlxBridge;
- (id)orchBridge;
- (id)sieventWithInnerType:(Class)arg1;
- (id)sievents;
- (id)sieventsWithComponentIdentifier:(id)arg1;
- (id)sieventsWithComponentName:(int)arg1;
- (id)sieventsWithInnerType:(Class)arg1;
- (id)sieventsWithType:(Class)arg1;
- (double)timestamp;
- (id)ueiBridge;

// Image: /System/Library/PrivateFrameworks/FeatureStore.framework/FeatureStore

- (id)dictionaryRepresentation;

@end
