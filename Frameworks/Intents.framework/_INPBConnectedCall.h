
@interface _INPBConnectedCall : PBCodable <NSCopying, NSSecureCoding, _INPBConnectedCall> {
    int  _audioRoute;
    struct { 
        unsigned int audioRoute : 1; 
    }  _has;
}

@property (nonatomic) int audioRoute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAudioRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (int)StringAsAudioRoute:(id)arg1;
- (int)audioRoute;
- (id)audioRouteAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAudioRoute;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAudioRoute:(int)arg1;
- (void)setHasAudioRoute:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
