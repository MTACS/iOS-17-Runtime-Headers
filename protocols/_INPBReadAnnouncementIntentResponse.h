
@protocol _INPBReadAnnouncementIntentResponse <NSObject>

@required

+ (Class)announcementRecordsType;

- (void)addAnnouncementRecords:(_INPBAnnouncementRecord *)arg1;
- (NSArray *)announcementRecords;
- (_INPBAnnouncementRecord *)announcementRecordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)announcementRecordsCount;
- (void)clearAnnouncementRecords;
- (void)setAnnouncementRecords:(NSArray *)arg1;

@end
