
@interface ICASCloudSyncableData : NSObject <AADataEventType> {
    NSArray * _syncableDataSummary;
}

@property (nonatomic, readonly) NSArray *syncableDataSummary;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithSyncableDataSummary:(id)arg1;
- (id)syncableDataSummary;
- (id)toDict;

@end
