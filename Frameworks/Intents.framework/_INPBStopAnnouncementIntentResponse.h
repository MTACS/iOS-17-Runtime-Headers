
@interface _INPBStopAnnouncementIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBStopAnnouncementIntentResponse> {
    struct { }  _has;
    NSArray * _stoppedAnnouncementRecords;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *stoppedAnnouncementRecords;
@property (nonatomic, readonly) unsigned long long stoppedAnnouncementRecordsCount;
@property (readonly) Class superclass;

+ (Class)stoppedAnnouncementRecordsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addStoppedAnnouncementRecords:(id)arg1;
- (void)clearStoppedAnnouncementRecords;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setStoppedAnnouncementRecords:(id)arg1;
- (id)stoppedAnnouncementRecords;
- (id)stoppedAnnouncementRecordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)stoppedAnnouncementRecordsCount;
- (void)writeTo:(id)arg1;

@end
