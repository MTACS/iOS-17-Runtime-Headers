
@interface ICASCloudSyncableItemData : NSObject <AADataEventType> {
    NSNumber * _count;
    NSString * _syncableDataType;
}

@property (nonatomic, readonly) NSNumber *count;
@property (nonatomic, readonly) NSString *syncableDataType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)count;
- (id)initWithSyncableDataType:(id)arg1 count:(id)arg2;
- (id)syncableDataType;
- (id)toDict;

@end
