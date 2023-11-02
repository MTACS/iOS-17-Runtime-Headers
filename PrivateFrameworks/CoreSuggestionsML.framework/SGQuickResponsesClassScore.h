
@interface SGQuickResponsesClassScore : NSObject {
    unsigned long long  _index;
    double  _value;
}

@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) double value;

- (long long)compare:(id)arg1;
- (unsigned long long)index;
- (id)initWithValue:(double)arg1 index:(unsigned long long)arg2;
- (double)value;

@end
