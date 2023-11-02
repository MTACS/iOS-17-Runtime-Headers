
@interface _INPBWorkoutCustomization : PBCodable <NSCopying, NSSecureCoding, _INPBWorkoutCustomization> {
    NSString * _environment;
    NSString * _focus;
    struct { }  _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *environment;
@property (nonatomic, copy) NSString *focus;
@property (nonatomic, readonly) bool hasEnvironment;
@property (nonatomic, readonly) bool hasFocus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)environment;
- (id)focus;
- (bool)hasEnvironment;
- (bool)hasFocus;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setFocus:(id)arg1;
- (void)writeTo:(id)arg1;

@end
