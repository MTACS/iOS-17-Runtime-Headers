
@interface BMStreamConfiguration : NSObject {
    Class  _eventClass;
    BMStreamInternalMetadata * _internalMetadata;
    NSArray * _legacyNames;
    BMStoreConfig * _storeConfig;
    NSString * _streamIdentifier;
    NSUUID * _streamUUID;
    BMStreamSyncPolicy * _syncPolicy;
}

@property (nonatomic, readonly) Class eventClass;
@property (nonatomic, readonly) BMStreamInternalMetadata *internalMetadata;
@property (nonatomic, readonly) NSArray *legacyNames;
@property (nonatomic, readonly) BMStoreConfig *storeConfig;
@property (nonatomic, readonly) NSString *streamIdentifier;
@property (nonatomic, readonly) NSUUID *streamUUID;
@property (nonatomic, readonly) BMStreamSyncPolicy *syncPolicy;

- (void).cxx_destruct;
- (Class)eventClass;
- (id)init;
- (id)initWithStreamIdentifier:(id)arg1 eventClass:(Class)arg2 storeConfig:(id)arg3;
- (id)initWithStreamIdentifier:(id)arg1 eventClass:(Class)arg2 storeConfig:(id)arg3 syncPolicy:(id)arg4 alternativeNames:(id)arg5;
- (id)initWithStreamIdentifier:(id)arg1 eventClass:(Class)arg2 storeConfig:(id)arg3 syncPolicy:(id)arg4 alternativeNames:(id)arg5 internalMetadata:(id)arg6;
- (id)initWithStreamUUID:(id)arg1 streamIdentifier:(id)arg2 eventClass:(Class)arg3 storeConfig:(id)arg4 syncPolicy:(id)arg5 legacyNames:(id)arg6 internalMetadata:(id)arg7;
- (id)internalMetadata;
- (id)legacyNames;
- (id)storeConfig;
- (id)streamIdentifier;
- (id)streamUUID;
- (id)syncPolicy;

@end
