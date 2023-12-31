
@protocol DOMEventTarget <NSObject, NSCopying>

@required

- (void)addEventListener:(NSString *)arg1 :(id <DOMEventListener>)arg2 :(bool)arg3;
- (void)addEventListener:(NSString *)arg1 listener:(id <DOMEventListener>)arg2 useCapture:(bool)arg3;
- (bool)dispatchEvent:(DOMEvent *)arg1;
- (void)removeEventListener:(NSString *)arg1 :(id <DOMEventListener>)arg2 :(bool)arg3;
- (void)removeEventListener:(NSString *)arg1 listener:(id <DOMEventListener>)arg2 useCapture:(bool)arg3;

@end
