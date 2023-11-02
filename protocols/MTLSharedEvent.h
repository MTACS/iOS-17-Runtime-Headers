
@protocol MTLSharedEvent <MTLEvent>

@required

- (MTLSharedEventHandle *)newSharedEventHandle;
- (void)notifyListener:(void *)arg1 atValue:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 9: MTLSharedEventListener *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLSharedEvent> *, unsigned long long, void*
- (void)setSignaledValue:(unsigned long long)arg1;
- (unsigned long long)signaledValue;

@end
