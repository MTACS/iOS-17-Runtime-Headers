
@interface SKIOIterator : SKIOObject {
    unsigned long long  _attempt;
}

@property (nonatomic) unsigned long long attempt;
@property (nonatomic, readonly) bool invalidated;

- (unsigned long long)attempt;
- (unsigned int)copyNextObject;
- (id)initWithClassName:(id)arg1;
- (bool)invalidated;
- (void)setAttempt:(unsigned long long)arg1;

@end
