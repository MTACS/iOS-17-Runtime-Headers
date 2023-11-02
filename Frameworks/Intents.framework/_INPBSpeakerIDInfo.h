
@interface _INPBSpeakerIDInfo : PBCodable <NSCopying, NSSecureCoding, _INPBSpeakerIDInfo> {
    struct { 
        unsigned int speakerIDConfidence : 1; 
    }  _has;
    _INPBString * _sharedUserID;
    int  _speakerIDConfidence;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSharedUserID;
@property (nonatomic) bool hasSpeakerIDConfidence;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBString *sharedUserID;
@property (nonatomic) int speakerIDConfidence;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsSpeakerIDConfidence:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSharedUserID;
- (bool)hasSpeakerIDConfidence;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSpeakerIDConfidence:(bool)arg1;
- (void)setSharedUserID:(id)arg1;
- (void)setSpeakerIDConfidence:(int)arg1;
- (id)sharedUserID;
- (int)speakerIDConfidence;
- (id)speakerIDConfidenceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
