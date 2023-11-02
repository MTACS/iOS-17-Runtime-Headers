
@interface MRClientDiagnosticsDataSource : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _map;
}

@property (nonatomic, readonly) NSString *diagnostic;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) NSMutableDictionary *map;

+ (id)sharedDataSource;

- (void).cxx_destruct;
- (void)add:(id)arg1;
- (id)diagnostic;
- (id)init;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)map;
- (void)remove:(id)arg1;

@end
