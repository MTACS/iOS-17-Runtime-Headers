
@interface WKPDFFoundTextRange : UITextRange {
    unsigned long long  _index;
}

@property (nonatomic) unsigned long long index;

+ (id)foundTextRangeWithIndex:(unsigned long long)arg1;

- (id)end;
- (unsigned long long)index;
- (bool)isEmpty;
- (void)setIndex:(unsigned long long)arg1;
- (id)start;

@end
