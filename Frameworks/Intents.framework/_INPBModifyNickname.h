
@interface _INPBModifyNickname : PBCodable <NSCopying, NSSecureCoding, _INPBModifyNickname> {
    struct { 
        unsigned int isRemoval : 1; 
    }  _has;
    bool  _isRemoval;
    _INPBString * _targetNickname;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasIsRemoval;
@property (nonatomic, readonly) bool hasTargetNickname;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRemoval;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBString *targetNickname;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIsRemoval;
- (bool)hasTargetNickname;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRemoval;
- (bool)readFrom:(id)arg1;
- (void)setHasIsRemoval:(bool)arg1;
- (void)setIsRemoval:(bool)arg1;
- (void)setTargetNickname:(id)arg1;
- (id)targetNickname;
- (void)writeTo:(id)arg1;

@end
