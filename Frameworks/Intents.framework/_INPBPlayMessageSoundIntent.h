
@interface _INPBPlayMessageSoundIntent : PBCodable <NSCopying, NSSecureCoding, _INPBPlayMessageSoundIntent> {
    struct { 
        unsigned int soundType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSString * _messageIdentifier;
    int  _soundType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasMessageIdentifier;
@property (nonatomic) bool hasSoundType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, copy) NSString *messageIdentifier;
@property (nonatomic) int soundType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsSoundType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (bool)hasMessageIdentifier;
- (bool)hasSoundType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)messageIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setHasSoundType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setMessageIdentifier:(id)arg1;
- (void)setSoundType:(int)arg1;
- (int)soundType;
- (id)soundTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
