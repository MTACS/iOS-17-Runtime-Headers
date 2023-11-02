
@interface CPLRecordView : NSObject

@property (nonatomic, readonly) CPLPlaceholderRecord *placeholderRecord;
@property (nonatomic, readonly) NSData *recordChangeData;
@property (nonatomic, readonly) CPLScopedIdentifier *scopedIdentifier;
@property (nonatomic, readonly) NSData *sharingRecordChangeData;
@property (nonatomic, readonly) CPLRecordChange *synthesizedRecord;

- (id)changeForType:(unsigned long long)arg1;
- (id)description;
- (id)placeholderRecord;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id*)arg3;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id*)arg3 changeType:(unsigned long long)arg4 diffTracker:(id)arg5;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id*)arg3 diffTracker:(id)arg4;
- (id)recordChangeData;
- (Class)recordClass;
- (id)redactedDescription;
- (id)relatedScopedIdentifier;
- (id)relation;
- (id)scopedIdentifier;
- (id)secondaryScopedIdentifier;
- (id)sharingRecordChangeData;
- (bool)supportsResources;
- (id)synthesizedRecord;

@end
