
@interface WFGasQueryController : NSObject {
    CWFInterface * _cInterface;
    <WFGasQueryControllerDelegate> * _delegate;
    NSMapTable * _gasResponseCache;
    WFInterface * _interface;
    NSSet * _profiles;
    NSMutableSet * _resolvedNetworks;
}

@property (nonatomic, retain) CWFInterface *cInterface;
@property (nonatomic) <WFGasQueryControllerDelegate> *delegate;
@property (nonatomic, retain) NSMapTable *gasResponseCache;
@property (nonatomic, retain) WFInterface *interface;
@property (nonatomic, readonly) NSSet *profiles;
@property (nonatomic, retain) NSMutableSet *resolvedNetworks;

- (void).cxx_destruct;
- (id)_ANQPDictionaryFromScanResult:(id)arg1;
- (id)_defaultANQPParameterForNetworks:(id)arg1;
- (void)_processANQPResults:(id)arg1 scanRecords:(id)arg2 error:(id)arg3;
- (id)cInterface;
- (id)delegate;
- (id)gasResponseCache;
- (id)init;
- (id)initWithInterface:(id)arg1;
- (id)interface;
- (id)profileForNetwork:(id)arg1;
- (id)profiles;
- (void)removeAllProfiles;
- (void)removeProfileForNetwork:(id)arg1;
- (void)resolveProfileForNetwork:(id)arg1 handler:(id /* block */)arg2 force:(bool)arg3;
- (void)resolveProfilesForNetworks:(id)arg1;
- (id)resolvedNetworks;
- (void)setCInterface:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGasResponseCache:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setResolvedNetworks:(id)arg1;

@end
