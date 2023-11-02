
@protocol RCMutableRecording <RCRecording>

@required

- (NSDate *)creationDate;
- (NSDate *)deletionDate;
- (bool)downloading;
- (bool)enhanced;
- (bool)favorite;
- (NSString *)fileName;
- (double)length;
- (bool)manuallyRenamed;
- (bool)musicMemo;
- (bool)pendingRestore;
- (bool)playable;
- (bool)recordedOnWatch;
- (void)setCreationDate:(NSDate *)arg1;
- (void)setDeletionDate:(NSDate *)arg1;
- (void)setDownloading:(bool)arg1;
- (void)setEnhanced:(bool)arg1;
- (void)setFavorite:(bool)arg1;
- (void)setFileName:(NSString *)arg1;
- (void)setLength:(double)arg1;
- (void)setManuallyRenamed:(bool)arg1;
- (void)setMusicMemo:(bool)arg1;
- (void)setPendingRestore:(bool)arg1;
- (void)setPlayable:(bool)arg1;
- (void)setRecordedOnWatch:(bool)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setUuid:(NSString *)arg1;
- (void)setWatchOS:(bool)arg1;
- (NSString *)title;
- (NSString *)uuid;
- (bool)watchOS;

@end
