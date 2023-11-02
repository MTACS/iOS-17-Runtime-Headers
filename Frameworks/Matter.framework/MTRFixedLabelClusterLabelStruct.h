
@interface MTRFixedLabelClusterLabelStruct : NSObject <NSCopying> {
    NSString * _label;
    NSString * _value;
}

@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
