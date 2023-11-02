
@interface PXLabeledValue : NSObject <NSCopying> {
    NSString * _localizedBadgeLabel;
    NSString * _localizedLabel;
    bool  _separator;
    <PXLabeledValueType> * _value;
}

@property (nonatomic, readonly) NSString *localizedBadgeLabel;
@property (nonatomic, readonly) NSString *localizedLabel;
@property (getter=isSeparator, nonatomic, readonly) bool separator;
@property (nonatomic, readonly) <PXLabeledValueType> *value;

+ (id)separatorLabeledValue;

- (void).cxx_destruct;
- (id)_initSeparator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithValue:(id)arg1 localizedLabel:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLabeledValue:(id)arg1;
- (bool)isSeparator;
- (id)labeledValueWithLocalizedBadgeLabel:(id)arg1;
- (id)localizedBadgeLabel;
- (id)localizedLabel;
- (id)value;

@end
