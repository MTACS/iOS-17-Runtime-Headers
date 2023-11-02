
@interface _INPBReadAnnouncementIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBReadAnnouncementIntentResponse> {
    NSArray * _announcementRecords;
    struct { }  _has;
}

@property (nonatomic, copy) NSArray *announcementRecords;
@property (nonatomic, readonly) unsigned long long announcementRecordsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)announcementRecordsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAnnouncementRecords:(id)arg1;
- (id)announcementRecords;
- (id)announcementRecordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)announcementRecordsCount;
- (void)clearAnnouncementRecords;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnnouncementRecords:(id)arg1;
- (void)writeTo:(id)arg1;

@end
