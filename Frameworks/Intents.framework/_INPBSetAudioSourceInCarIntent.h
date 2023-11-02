
@interface _INPBSetAudioSourceInCarIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSetAudioSourceInCarIntent> {
    int  _audioSource;
    struct { 
        unsigned int audioSource : 1; 
        unsigned int relativeAudioSourceReference : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _relativeAudioSourceReference;
}

@property (nonatomic) int audioSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAudioSource;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasRelativeAudioSourceReference;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int relativeAudioSourceReference;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsAudioSource:(id)arg1;
- (int)StringAsRelativeAudioSourceReference:(id)arg1;
- (int)audioSource;
- (id)audioSourceAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAudioSource;
- (bool)hasIntentMetadata;
- (bool)hasRelativeAudioSourceReference;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)relativeAudioSourceReference;
- (id)relativeAudioSourceReferenceAsString:(int)arg1;
- (void)setAudioSource:(int)arg1;
- (void)setHasAudioSource:(bool)arg1;
- (void)setHasRelativeAudioSourceReference:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setRelativeAudioSourceReference:(int)arg1;
- (void)writeTo:(id)arg1;

@end
