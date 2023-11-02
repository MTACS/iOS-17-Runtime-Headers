
@interface BSAtomicSignal : NSObject {
    _Atomic bool  _flag;
}

- (id)description;
- (bool)hasBeenSignalled;
- (id)init;
- (bool)signal;

@end
