
@protocol _INPBStopAnnouncementIntentResponse <NSObject>

@required

+ (Class)stoppedAnnouncementRecordsType;

- (void)addStoppedAnnouncementRecords:(_INPBAnnouncementRecord *)arg1;
- (void)clearStoppedAnnouncementRecords;
- (void)setStoppedAnnouncementRecords:(NSArray *)arg1;
- (NSArray *)stoppedAnnouncementRecords;
- (_INPBAnnouncementRecord *)stoppedAnnouncementRecordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)stoppedAnnouncementRecordsCount;

@end
