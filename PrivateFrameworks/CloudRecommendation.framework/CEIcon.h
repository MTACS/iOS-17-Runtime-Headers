
@interface CEIcon : NSObject <NSCopying, NSSecureCoding> {
    NSString * _type;
}

@property (nonatomic, retain) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
