
@interface _PASInternPool : _PASZonedObject {
    id /* block */  _copyWithZone;
    _PASLock * _lock;
}

- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)initWithBehavior:(unsigned long long)arg1 copyWithZone:(id /* block */)arg2;
- (id)intern:(id)arg1;
- (id)internNoCopy:(id)arg1;
- (bool)isEmpty;
- (bool)isInterned:(id)arg1;

@end
