
@interface MLSequnceAsFeatureValueArray : NSArray {
    MLSequence * _sequence;
}

@property (nonatomic, readonly) MLSequence *sequence;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWrappingSequence:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)sequence;

@end
