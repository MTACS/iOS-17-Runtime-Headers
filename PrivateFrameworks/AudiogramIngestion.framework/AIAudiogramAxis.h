
@interface AIAudiogramAxis : NSObject {
    unsigned long long  _axis;
    NSArray * _values;
}

@property (nonatomic) unsigned long long axis;
@property (nonatomic, readonly) AIRecognizedText *maxValue;
@property (nonatomic, readonly) AIRecognizedText *minValue;
@property (nonatomic, retain) NSArray *values;

- (void).cxx_destruct;
- (unsigned long long)axis;
- (id)description;
- (id)initWithAxis:(unsigned long long)arg1 values:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)maxValue;
- (id)minValue;
- (void)setAxis:(unsigned long long)arg1;
- (void)setValues:(id)arg1;
- (id)values;

@end
