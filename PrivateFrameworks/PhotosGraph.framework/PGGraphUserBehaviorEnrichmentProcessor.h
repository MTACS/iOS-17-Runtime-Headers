
@interface PGGraphUserBehaviorEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor> {
    NSObject<OS_os_log> * _loggingConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)enrichDataModelWithManager:(id)arg1 curationContext:(id)arg2 graphUpdateInventory:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)loggingConnection;

@end
