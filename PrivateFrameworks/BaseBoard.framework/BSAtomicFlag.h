
@interface BSAtomicFlag : NSObject {
    _Atomic bool  _flag;
}

- (id)description;
- (bool)getFlag;
- (id)init;
- (id)initWithFlag:(bool)arg1;
- (bool)setFlag:(bool)arg1;

@end
