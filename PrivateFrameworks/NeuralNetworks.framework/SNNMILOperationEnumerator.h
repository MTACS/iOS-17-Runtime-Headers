
@interface SNNMILOperationEnumerator : NSEnumerator {
    int  _currentIndex;
    SNNMILFunction * _function;
}

@property (nonatomic) SNNMILFunction *function;

- (void).cxx_destruct;
- (id)function;
- (id)initWithFunction:(id)arg1;
- (id)nextObject;
- (void)setFunction:(id)arg1;

@end
