
@interface TLKTableColumnAlignment : TLKObject {
    unsigned long long  _columnAlignment;
    long long  _dataAlignment;
    bool  _isEqualWidth;
}

@property (nonatomic) unsigned long long columnAlignment;
@property (nonatomic) long long dataAlignment;
@property (nonatomic) bool isEqualWidth;

- (unsigned long long)columnAlignment;
- (long long)dataAlignment;
- (id)description;
- (bool)isEqualWidth;
- (void)setColumnAlignment:(unsigned long long)arg1;
- (void)setDataAlignment:(long long)arg1;
- (void)setIsEqualWidth:(bool)arg1;
- (long long)textAlignment;

@end
