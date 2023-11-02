
@interface WKPDFFoundTextPosition : UITextPosition {
    unsigned long long  _index;
}

@property (nonatomic) unsigned long long index;

+ (id)textPositionWithIndex:(unsigned long long)arg1;

- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;

@end
