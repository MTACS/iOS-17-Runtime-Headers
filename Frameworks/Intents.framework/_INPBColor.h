
@interface _INPBColor : PBCodable <NSCopying, NSSecureCoding, _INPBColor> {
    double  _blue;
    double  _green;
    struct { 
        unsigned int blue : 1; 
        unsigned int green : 1; 
        unsigned int red : 1; 
    }  _has;
    double  _red;
}

@property (nonatomic) double blue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double green;
@property (nonatomic) bool hasBlue;
@property (nonatomic) bool hasGreen;
@property (nonatomic) bool hasRed;
@property (readonly) unsigned long long hash;
@property (nonatomic) double red;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (double)blue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (double)green;
- (bool)hasBlue;
- (bool)hasGreen;
- (bool)hasRed;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)red;
- (void)setBlue:(double)arg1;
- (void)setGreen:(double)arg1;
- (void)setHasBlue:(bool)arg1;
- (void)setHasGreen:(bool)arg1;
- (void)setHasRed:(bool)arg1;
- (void)setRed:(double)arg1;
- (void)writeTo:(id)arg1;

@end
