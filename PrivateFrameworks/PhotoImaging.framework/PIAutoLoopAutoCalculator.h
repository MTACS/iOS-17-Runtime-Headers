
@interface PIAutoLoopAutoCalculator : NUAutoCalculator {
    long long  _flavor;
}

@property (nonatomic) long long flavor;

- (long long)flavor;
- (id)initWithComposition:(id)arg1;
- (void)setFlavor:(long long)arg1;
- (void)submit:(id /* block */)arg1;

@end
