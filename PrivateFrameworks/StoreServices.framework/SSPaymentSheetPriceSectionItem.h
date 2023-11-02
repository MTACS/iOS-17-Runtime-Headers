
@interface SSPaymentSheetPriceSectionItem : NSObject <NSCopying> {
    NSString * _label;
    NSString * _price;
}

@property (copy) NSString *label;
@property (copy) NSString *price;

- (void).cxx_destruct;
- (void)_parseDictionary:(id)arg1 withCaseControl:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)label;
- (id)price;
- (void)setLabel:(id)arg1;
- (void)setPrice:(id)arg1;

@end
