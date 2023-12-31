
@interface RCEntityRevision : NSManagedObject

@property (nonatomic, readonly) long long recordingID;
@property (nonatomic, readonly) long long revisionID;
@property (nonatomic, readonly) long long revisionType;

- (long long)recordingID;
- (long long)revisionID;
- (long long)revisionType;
- (void)setRecordingID:(long long)arg1;
- (void)setRevisionID:(long long)arg1;
- (void)setRevisionType:(long long)arg1;

@end
