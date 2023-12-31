
@interface ATLegacySyncSessionTask : ATSessionTask {
    <ATClient> * _client;
    unsigned int  _grappaSessionID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSString *dataClass;
@property (nonatomic) unsigned int grappaSessionID;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1 shouldAddAssetTask:(bool)arg2;
- (void)cancel;
- (unsigned int)grappaSessionID;
- (id)initWithDataClass:(id)arg1;
- (void)prepareWithHostAnchor:(id)arg1 version:(id)arg2;
- (void)reconcileWithAnchor:(id)arg1 syncType:(unsigned int)arg2;
- (id)sessionGroupingKey;
- (void)setGrappaSessionID:(unsigned int)arg1;
- (void)start;

@end
