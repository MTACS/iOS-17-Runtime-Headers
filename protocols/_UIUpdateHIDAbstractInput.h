
@protocol _UIUpdateHIDAbstractInput

@required

- (void)addEvent:(struct __IOHIDEvent { }*)arg1;
- (void)removeEvent:(struct __IOHIDEvent { }*)arg1;
- (struct __IOHIDEvent { }*)stopEventForModelTime:(unsigned long long)arg1 alignment:(int)arg2;

@end
