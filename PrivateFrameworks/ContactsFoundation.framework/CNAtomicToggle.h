
@interface CNAtomicToggle : NSObject {
    _Atomic bool  _state;
}

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithState:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (bool)trySetState:(bool)arg1;

@end
