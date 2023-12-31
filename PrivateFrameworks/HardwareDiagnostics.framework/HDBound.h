
@interface HDBound : NSObject <NSCopying, NSSecureCoding> {
    bool  _open;
    NSMeasurement * _value;
}

@property (nonatomic) bool open;
@property (nonatomic, copy) NSMeasurement *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 open:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBound:(id)arg1;
- (bool)open;
- (void)setOpen:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
