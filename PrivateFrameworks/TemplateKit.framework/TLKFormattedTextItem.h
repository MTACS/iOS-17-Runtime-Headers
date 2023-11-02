
@interface TLKFormattedTextItem : TLKObject {
    long long  _color;
    bool  _isBold;
    bool  _isEmphasized;
}

@property (nonatomic) long long color;
@property (nonatomic) bool isBold;
@property (nonatomic) bool isEmphasized;

- (unsigned long long)_itemType;
- (long long)color;
- (bool)hasContent;
- (bool)isBold;
- (bool)isEmphasized;
- (void)setColor:(long long)arg1;
- (void)setIsBold:(bool)arg1;
- (void)setIsEmphasized:(bool)arg1;

@end
