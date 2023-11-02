
@interface _INPBDeleteFilePermanentlyIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBDeleteFilePermanentlyIntentResponse> {
    bool  _confirm;
    struct { 
        unsigned int confirm : 1; 
        unsigned int success : 1; 
    }  _has;
    bool  _success;
}

@property (nonatomic) bool confirm;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasConfirm;
@property (nonatomic) bool hasSuccess;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool success;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (bool)confirm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasConfirm;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfirm:(bool)arg1;
- (void)setHasConfirm:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
