
@interface PPExtractionContext : NSObject {
    NSDictionary * _probabilities;
}

- (void).cxx_destruct;
- (id)initWithProbabilities:(id)arg1;
- (double)probabilityForDomain:(unsigned int)arg1;

@end
