
@interface _INPBGetCarLockStatusIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBGetCarLockStatusIntentResponse> {
    struct { 
        unsigned int locked : 1; 
    }  _has;
    bool  _locked;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasLocked;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool locked;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLocked;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)locked;
- (bool)readFrom:(id)arg1;
- (void)setHasLocked:(bool)arg1;
- (void)setLocked:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
