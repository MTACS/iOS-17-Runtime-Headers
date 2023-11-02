
@interface GDEntitySourceID : NSObject <NSCopying, NSSecureCoding> {
    NSString * _source;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSString *source;
@property (nonatomic, readonly, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)initWithValue:(id)arg1 source:(id)arg2;
- (id)source;
- (id)value;

@end
