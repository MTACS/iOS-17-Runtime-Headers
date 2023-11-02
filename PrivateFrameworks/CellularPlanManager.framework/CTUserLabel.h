
@interface CTUserLabel : NSObject <NSCopying, NSSecureCoding> {
    NSString * _key;
    NSString * _label;
    NSString * _labelId;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *labelId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_labelKeyDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)indexInPredefinedLabels:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 label:(id)arg2 labelId:(id)arg3;
- (id)initWithLabel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)label;
- (id)labelId;

@end
