
@interface NTKKeylineTouchable : NSObject {
    id /* block */  _handler;
}

+ (id)touchableWithHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 keyline:(id)arg2 withEvent:(id)arg3;

@end
