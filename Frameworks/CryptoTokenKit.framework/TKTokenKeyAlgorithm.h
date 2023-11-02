
@interface TKTokenKeyAlgorithm : NSObject {
    NSArray * _algorithms;
}

- (void).cxx_destruct;
- (id)initWithAlgorithmsArray:(id)arg1;
- (bool)isAlgorithm:(struct __CFString { }*)arg1;
- (bool)supportsAlgorithm:(struct __CFString { }*)arg1;

@end
