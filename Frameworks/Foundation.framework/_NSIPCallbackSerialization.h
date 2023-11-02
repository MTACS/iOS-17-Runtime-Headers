
@interface _NSIPCallbackSerialization : NSObject {
    NSUUID * _UUID;
    id /* block */  _endBlock;
    _Atomic bool  _hasBegun;
    _Atomic bool  _hasEnded;
}

- (void)dealloc;
- (id)init;

@end
