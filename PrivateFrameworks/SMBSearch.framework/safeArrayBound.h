
@interface safeArrayBound : NSObject {
    unsigned int  _cElements;
    unsigned int  _lowBound;
}

@property unsigned int cElements;
@property unsigned int lowBound;

- (unsigned int)cElements;
- (id)initWithElements:(unsigned int)arg1 LowBound:(unsigned int)arg2;
- (unsigned int)lowBound;
- (void)setCElements:(unsigned int)arg1;
- (void)setLowBound:(unsigned int)arg1;

@end
