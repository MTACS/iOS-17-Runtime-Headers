
@interface BKMatchTouchIDOperation : BKMatchOperation {
    bool  _requireFingerOff;
}

@property (nonatomic) <BKMatchTouchIDOperationDelegate> *delegate;
@property (nonatomic) bool requireFingerOff;

- (id)optionsDictionaryWithError:(id*)arg1;
- (bool)requireFingerOff;
- (void)setRequireFingerOff:(bool)arg1;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;

@end
