
@interface VisionCoreNamedObjects : NSObject <NSCopying, NSFastEnumeration, NSMutableCopying> {
    NSDictionary * _objects;
}

@property (nonatomic, readonly, copy) NSArray *allNames;
@property (nonatomic, readonly) unsigned long long count;

// Image: /System/Library/PrivateFrameworks/VisionCore.framework/VisionCore

- (void).cxx_destruct;
- (id)_initWithRetainedDictionary:(id)arg1;
- (bool)accessReadOnlyDataForName:(id)arg1 usingBlock:(id /* block */)arg2 error:(id*)arg3;
- (id)allNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)dataForName:(id)arg1 error:(id*)arg2;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithNamedObjects:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectOfClass:(Class)arg1 forName:(id)arg2 error:(id*)arg3;
- (struct __CVBuffer { }*)pixelBufferForName:(id)arg1 error:(id*)arg2;
- (struct __IOSurface { }*)surfaceAssociatedWithName:(id)arg1 error:(id*)arg2;
- (struct __IOSurface { }*)surfaceForName:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/Vision.framework/Vision

- (bool)VNEnumerateFloatValuesAtIndexes:(id)arg1 asTensor:(id)arg2 usingBlock:(id /* block */)arg3 error:(id*)arg4;
- (bool)VNGetConfidenceValue:(float*)arg1 asTensor:(id)arg2 error:(id*)arg3;

@end
