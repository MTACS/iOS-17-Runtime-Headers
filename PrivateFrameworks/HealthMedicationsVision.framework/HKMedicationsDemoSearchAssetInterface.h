
@interface HKMedicationsDemoSearchAssetInterface : NSObject <HKMedicationsAssetInterface> {
    NSString * _assetPath;
    struct sqlite3 { } * _db;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _interruptionLock;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSString *assetPath;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)assetPath;
- (void)close;
- (id)expandedGenericMedicationSearchResult:(id)arg1 error:(id*)arg2;
- (id)genericMedicationsFromTokens:(id)arg1 error:(id*)arg2;
- (id)initWithAssetPath:(id)arg1;
- (id)medicationFromNDCCode:(id)arg1 error:(id*)arg2;
- (int)openAsset;
- (id)queue;
- (void)setAssetPath:(id)arg1;
- (void)setQueue:(id)arg1;

@end
