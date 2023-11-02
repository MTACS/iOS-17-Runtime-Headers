
@interface SUUIGiftAmount : NSObject <NSCopying> {
    NSString * _displayLabel;
    NSString * _partNumber;
    NSNumber * _value;
}

@property (nonatomic, copy) NSString *displayLabel;
@property (nonatomic, copy) NSString *partNumber;
@property (nonatomic, copy) NSNumber *value;

- (void).cxx_destruct;
- (id)HTTPBodyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayLabel;
- (id)initWithAmountDictionary:(id)arg1;
- (id)partNumber;
- (void)setDisplayLabel:(id)arg1;
- (void)setPartNumber:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
