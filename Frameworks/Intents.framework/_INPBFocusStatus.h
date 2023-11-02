
@interface _INPBFocusStatus : PBCodable <NSCopying, NSSecureCoding, _INPBFocusStatus> {
    struct { 
        unsigned int isFocused : 1; 
    }  _has;
    bool  _isFocused;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasIsFocused;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFocused;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIsFocused;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFocused;
- (bool)readFrom:(id)arg1;
- (void)setHasIsFocused:(bool)arg1;
- (void)setIsFocused:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
