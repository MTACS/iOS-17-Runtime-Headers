
@interface TFDataAggregationTask : NSObject {
    id /* block */  _extractValuesBlock;
    id /* block */  _loadDataBlock;
    NSString * _logKey;
    NSString * _name;
    NSArray * _providedEntryIdentifiers;
}

@property (nonatomic, copy) id /* block */ extractValuesBlock;
@property (nonatomic, copy) id /* block */ loadDataBlock;
@property (nonatomic, readonly, copy) NSString *logKey;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *providedEntryIdentifiers;

+ (id)anytimeTasksForSession:(id)arg1;
+ (double)batteryLevel;
+ (id)cellularServiceInfo;
+ (id)deviceInfoTask;
+ (id)deviceType;
+ (id)networkInfoTask;
+ (id)networkType;
+ (id)regionInfoTask;
+ (struct CGSize { double x1; double x2; })screenDimensions;
+ (id)sessionInfoTaskForIdentifier:(id)arg1;
+ (id)snapshotTasksForSession:(id)arg1;
+ (id)watchInfoTask;

- (void).cxx_destruct;
- (id)description;
- (void)extractDataPropertiesFromData:(id)arg1 intoDataContainer:(id)arg2;
- (id /* block */)extractValuesBlock;
- (id)initWithName:(id)arg1 providedEntryIdentifiers:(id)arg2;
- (id /* block */)loadDataBlock;
- (void)loadDataOnQueue:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)logKey;
- (id)name;
- (id)providedEntryIdentifiers;
- (void)setExtractValuesBlock:(id /* block */)arg1;
- (void)setLoadDataBlock:(id /* block */)arg1;

@end
