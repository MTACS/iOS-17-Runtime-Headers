
@interface CNVCardUnknownPropertyDescription : NSObject {
    NSString * _originalLine;
    NSString * _propertyName;
}

@property (copy) NSString *originalLine;
@property (copy) NSString *propertyName;

- (void).cxx_destruct;
- (id)description;
- (bool)isEqual:(id)arg1;
- (id)originalLine;
- (id)propertyName;
- (void)setOriginalLine:(id)arg1;
- (void)setPropertyName:(id)arg1;

@end
