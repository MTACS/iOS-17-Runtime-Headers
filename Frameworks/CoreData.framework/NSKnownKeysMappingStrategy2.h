
@interface NSKnownKeysMappingStrategy2 : NSKnownKeysMappingStrategy1

- (bool)_isDeallocating;
- (id)_setupForKeys:(id*)arg1 count:(unsigned long long)arg2 table:(void*)arg3 inData:(id)arg4;
- (bool)_tryRetain;
- (void)dealloc;
- (id)init;
- (id)initForKeys:(id)arg1;
- (id)initForKeys:(id*)arg1 count:(unsigned long long)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
