
@interface ABBinders : NSObject {
    id /* block */  _blobBinder;
    id /* block */  _intBinder;
    id /* block */  _pointerBinder;
    id /* block */  _stringBinder;
}

@property id /* block */ blobBinder;
@property id /* block */ intBinder;
@property id /* block */ pointerBinder;
@property id /* block */ stringBinder;

- (id /* block */)blobBinder;
- (id /* block */)intBinder;
- (id /* block */)pointerBinder;
- (void)setBlobBinder:(id /* block */)arg1;
- (void)setIntBinder:(id /* block */)arg1;
- (void)setPointerBinder:(id /* block */)arg1;
- (void)setStringBinder:(id /* block */)arg1;
- (id /* block */)stringBinder;

@end
