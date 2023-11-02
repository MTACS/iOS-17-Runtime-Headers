
@interface RCSavedRecording : NSManagedObject {
    AVAsset * _avAsset;
    bool  _pathWasInvalid;
    long long  revisionID;
}

@property (nonatomic, copy) NSString *customLabel;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, readonly) double duration;
@property (nonatomic, copy) NSString *path;
@property (nonatomic) bool pendingRestore;
@property (nonatomic) long long recordingID;
@property (nonatomic) long long revisionID;
@property (nonatomic, copy) NSString *uniqueID;
@property (nonatomic, readonly, copy) NSURL *url;

+ (void)deleteOrphanedEntityRevisionsWithContext:(id)arg1;
+ (id)fetchLegacyRecordingsForMigrationWithContext:(id)arg1;
+ (id)legacyRecordingWithUniqueIDFetchRequest:(id)arg1;

- (void).cxx_destruct;
- (id)URIRepresentation;
- (void)_validatePath;
- (id)avAsset;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (id)customLabel;
- (double)duration;
- (bool)isContentBeingModified;
- (id)path;
- (long long)recordingID;
- (long long)revisionID;
- (void)setCustomLabel:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setPath:(id)arg1;
- (void)setRecordingID:(long long)arg1;
- (void)setRevisionID:(long long)arg1;
- (id)url;
- (void)willSave;

@end
