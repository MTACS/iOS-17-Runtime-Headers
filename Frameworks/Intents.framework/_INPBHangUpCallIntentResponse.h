
@interface _INPBHangUpCallIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBHangUpCallIntentResponse> {
    struct { 
        unsigned int hungUpCallType : 1; 
    }  _has;
    int  _hungUpCallType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasHungUpCallType;
@property (readonly) unsigned long long hash;
@property (nonatomic) int hungUpCallType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (int)StringAsHungUpCallType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasHungUpCallType;
- (unsigned long long)hash;
- (int)hungUpCallType;
- (id)hungUpCallTypeAsString:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHungUpCallType:(bool)arg1;
- (void)setHungUpCallType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
