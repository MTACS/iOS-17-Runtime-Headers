
@interface ICASCloudOperationData : NSObject <AADataEventType> {
    NSString * _operationGroupName;
    NSString * _operationID;
    ICASOperationType * _operationType;
}

@property (nonatomic, readonly) NSString *operationGroupName;
@property (nonatomic, readonly) NSString *operationID;
@property (nonatomic, readonly) ICASOperationType *operationType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithOperationID:(id)arg1 operationType:(id)arg2 operationGroupName:(id)arg3;
- (id)operationGroupName;
- (id)operationID;
- (id)operationType;
- (id)toDict;

@end
