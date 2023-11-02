
@interface _INPBSendAnnouncementIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBSendAnnouncementIntentResponse> {
    struct { }  _has;
    NSArray * _sentAnnouncements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *sentAnnouncements;
@property (nonatomic, readonly) unsigned long long sentAnnouncementsCount;
@property (readonly) Class superclass;

+ (Class)sentAnnouncementsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addSentAnnouncements:(id)arg1;
- (void)clearSentAnnouncements;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sentAnnouncements;
- (id)sentAnnouncementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sentAnnouncementsCount;
- (void)setSentAnnouncements:(id)arg1;
- (void)writeTo:(id)arg1;

@end
