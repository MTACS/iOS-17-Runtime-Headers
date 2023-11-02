
@protocol IXCoordinatorWithRemovabilityState <NSObject>

@required

- (unsigned long long)removabilityWithError:(id*)arg1;
- (bool)setRemovability:(unsigned long long)arg1 byClient:(unsigned long long)arg2 error:(id*)arg3;

@end
