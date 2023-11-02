
@interface CPLRecordPushContext : NSObject <NSSecureCoding> {
    long long  _flags;
    unsigned long long  _priority;
    NSString * _uploadIdentifier;
}

@property (nonatomic, readonly) long long flags;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly) NSString *uploadIdentifier;

+ (long long)mergingFlags:(long long)arg1 previousFlags:(long long)arg2 changeType:(unsigned long long)arg3;
+ (unsigned long long)minimumPriorityForLocalConflictResolution;
+ (id)newEmptyPushContext;
+ (id)newPushContextForChange:(id)arg1 overStoredRecord:(id)arg2 initialUpload:(bool)arg3;
+ (id)pushContextsFromStoredUploadIdentifiers:(id)arg1;
+ (id)pushContextsFromStoredUploadIdentifiersInCoder:(id)arg1 key:(id)arg2;
+ (void)setMinimumPriorityForLocalConflictResolution:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyContextWithPriority:(unsigned long long)arg1;
- (id)copyContextWithUploadIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)flags;
- (id)initWithCoder:(id)arg1;
- (id)initWithUploadIdentifier:(id)arg1 flags:(long long)arg2 priority:(unsigned long long)arg3;
- (unsigned long long)priority;
- (id)pushContextAddingUploadIdentifier;
- (id)pushContextMergingFlags:(long long)arg1 changeType:(unsigned long long)arg2 uploadIdentifier:(id)arg3 priority:(unsigned long long)arg4;
- (id)uploadIdentifier;

@end
