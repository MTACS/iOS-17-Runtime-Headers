
@interface UITextSelectionWindowAveragedValue : NSObject {
    unsigned long long  _depth;
    NSMutableArray * _values;
}

- (void).cxx_destruct;
- (void)addValue:(double)arg1;
- (void)flushValues;
- (id)initWithDepth:(unsigned long long)arg1;
- (double)windowAveragedValue;

@end
