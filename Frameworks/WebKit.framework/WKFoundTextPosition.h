
@interface WKFoundTextPosition : UITextPosition {
    unsigned long long  _offset;
    unsigned long long  _order;
}

@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long order;

+ (id)textPositionWithOffset:(unsigned long long)arg1 order:(unsigned long long)arg2;

- (unsigned long long)offset;
- (unsigned long long)order;
- (void)setOffset:(unsigned long long)arg1;
- (void)setOrder:(unsigned long long)arg1;

@end
