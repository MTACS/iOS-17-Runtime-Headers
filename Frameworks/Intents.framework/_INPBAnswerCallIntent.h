
@interface _INPBAnswerCallIntent : PBCodable <NSCopying, NSSecureCoding, _INPBAnswerCallIntent> {
    int  _audioRoute;
    NSString * _callIdentifier;
    struct { 
        unsigned int audioRoute : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
}

@property (nonatomic) int audioRoute;
@property (nonatomic, copy) NSString *callIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAudioRoute;
@property (nonatomic, readonly) bool hasCallIdentifier;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsAudioRoute:(id)arg1;
- (int)audioRoute;
- (id)audioRouteAsString:(int)arg1;
- (id)callIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAudioRoute;
- (bool)hasCallIdentifier;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAudioRoute:(int)arg1;
- (void)setCallIdentifier:(id)arg1;
- (void)setHasAudioRoute:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)writeTo:(id)arg1;

@end
