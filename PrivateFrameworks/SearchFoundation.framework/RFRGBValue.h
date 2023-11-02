
@interface RFRGBValue : NSObject <NSCopying, NSSecureCoding, RFRGBValue> {
    NSNumber * _blue;
    NSNumber * _green;
    NSNumber * _red;
}

@property (nonatomic, copy) NSNumber *blue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSNumber *green;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSNumber *red;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)green;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)red;
- (void)setBlue:(id)arg1;
- (void)setGreen:(id)arg1;
- (void)setRed:(id)arg1;

@end
