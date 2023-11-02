
@interface VisionCoreMutableNamedObjects : VisionCoreNamedObjects

- (bool)assignData:(id)arg1 toName:(id)arg2 error:(id*)arg3;
- (bool)assignObject:(id)arg1 toName:(id)arg2 error:(id*)arg3;
- (bool)assignPixelBuffer:(struct __CVBuffer { }*)arg1 toName:(id)arg2 error:(id*)arg3;
- (bool)assignSurface:(struct __IOSurface { }*)arg1 toName:(id)arg2 error:(id*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)removeAssignmentForName:(id)arg1;

@end
