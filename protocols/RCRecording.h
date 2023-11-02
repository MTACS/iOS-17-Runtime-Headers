
@protocol RCRecording <NSFetchRequestResult>

@required

- (NSURL *)URIRepresentation;
- (bool)audioFutureNeedsExport;
- (AVAsset *)avAsset;
- (NSURL *)copyResourcesForSharingIntoDirectory:(NSURL *)arg1;
- (NSDate *)creationDate;
- (NSDate *)deletionDate;
- (bool)downloading;
- (bool)enhanced;
- (bool)favorite;
- (NSString *)fileName;
- (bool)isContentBeingModified;
- (double)length;
- (bool)manuallyRenamed;
- (bool)musicMemo;
- (bool)pendingRestore;
- (bool)playable;
- (bool)recordedOnWatch;
- (void)setRecordedOnWatch:(bool)arg1;
- (NSString *)subjectForActivityType:(NSString *)arg1;
- (NSString *)title;
- (NSString *)titleDisallowingEmptyString;
- (NSURL *)url;
- (NSString *)uuid;
- (bool)watchOS;

@optional

- (NSString *)userFolderUUID;

@end
