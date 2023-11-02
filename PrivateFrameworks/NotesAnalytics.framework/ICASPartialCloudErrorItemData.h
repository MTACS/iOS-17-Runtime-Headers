
@interface ICASPartialCloudErrorItemData : NSObject <AADataEventType> {
    NSNumber * _count;
    NSNumber * _errorCode;
    NSString * _errorString;
    NSString * _syncableDataType;
}

@property (nonatomic, readonly) NSNumber *count;
@property (nonatomic, readonly) NSNumber *errorCode;
@property (nonatomic, readonly) NSString *errorString;
@property (nonatomic, readonly) NSString *syncableDataType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)count;
- (id)errorCode;
- (id)errorString;
- (id)initWithSyncableDataType:(id)arg1 errorCode:(id)arg2 count:(id)arg3 errorString:(id)arg4;
- (id)syncableDataType;
- (id)toDict;

@end
