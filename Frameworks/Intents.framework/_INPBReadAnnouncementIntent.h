
@interface _INPBReadAnnouncementIntent : PBCodable <NSCopying, NSSecureCoding, _INPBReadAnnouncementIntent> {
    struct { 
        unsigned int readType : 1; 
        unsigned int userNotificationType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _readType;
    NSString * _startAnnouncementIdentifier;
    int  _userNotificationType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasReadType;
@property (nonatomic, readonly) bool hasStartAnnouncementIdentifier;
@property (nonatomic) bool hasUserNotificationType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int readType;
@property (nonatomic, copy) NSString *startAnnouncementIdentifier;
@property (readonly) Class superclass;
@property (nonatomic) int userNotificationType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsReadType:(id)arg1;
- (int)StringAsUserNotificationType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (bool)hasReadType;
- (bool)hasStartAnnouncementIdentifier;
- (bool)hasUserNotificationType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)readType;
- (id)readTypeAsString:(int)arg1;
- (void)setHasReadType:(bool)arg1;
- (void)setHasUserNotificationType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setReadType:(int)arg1;
- (void)setStartAnnouncementIdentifier:(id)arg1;
- (void)setUserNotificationType:(int)arg1;
- (id)startAnnouncementIdentifier;
- (int)userNotificationType;
- (id)userNotificationTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
