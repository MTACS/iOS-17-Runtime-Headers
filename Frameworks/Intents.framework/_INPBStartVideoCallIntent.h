
@interface _INPBStartVideoCallIntent : PBCodable <NSCopying, NSSecureCoding, _INPBStartVideoCallIntent> {
    int  _audioRoute;
    _INPBStartCallRequestMetadata * _callRequestMetadata;
    NSArray * _contacts;
    struct { 
        unsigned int audioRoute : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSArray * _targetContacts;
}

@property (nonatomic) int audioRoute;
@property (nonatomic, retain) _INPBStartCallRequestMetadata *callRequestMetadata;
@property (nonatomic, copy) NSArray *contacts;
@property (nonatomic, readonly) unsigned long long contactsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAudioRoute;
@property (nonatomic, readonly) bool hasCallRequestMetadata;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *targetContacts;
@property (nonatomic, readonly) unsigned long long targetContactsCount;

+ (Class)contactType;
+ (bool)supportsSecureCoding;
+ (Class)targetContactsType;

- (void).cxx_destruct;
- (int)StringAsAudioRoute:(id)arg1;
- (void)addContact:(id)arg1;
- (void)addTargetContacts:(id)arg1;
- (int)audioRoute;
- (id)audioRouteAsString:(int)arg1;
- (id)callRequestMetadata;
- (void)clearContacts;
- (void)clearTargetContacts;
- (id)contactAtIndex:(unsigned long long)arg1;
- (id)contacts;
- (unsigned long long)contactsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAudioRoute;
- (bool)hasCallRequestMetadata;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAudioRoute:(int)arg1;
- (void)setCallRequestMetadata:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setHasAudioRoute:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTargetContacts:(id)arg1;
- (id)targetContacts;
- (id)targetContactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)targetContactsCount;
- (void)writeTo:(id)arg1;

@end
