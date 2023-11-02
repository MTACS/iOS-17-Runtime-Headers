
@interface HMDCoreDataCloudKitOperationLogEvent : HMMLogEvent {
    unsigned long long  _operationType;
}

@property (readonly) unsigned long long operationType;

- (id)initWithOperationType:(unsigned long long)arg1;
- (unsigned long long)operationType;

@end
