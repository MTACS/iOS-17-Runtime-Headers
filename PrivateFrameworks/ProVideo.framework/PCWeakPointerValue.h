
@interface PCWeakPointerValue : NSObject <NSCopying> {
    bool  _hasZeroingWeakReference;
    id  _pointerValue;
    id  _zeroingWeakValue;
}

@property (nonatomic, readonly) id nonretainedObjectValue;
@property (nonatomic, readonly) void*pointerValue;

+ (id)arrayFromWeakPointerValueArray:(id)arg1;
+ (id)setFromWeakPointerValueSet:(id)arg1;
+ (id)valueWithNonretainedObject:(id)arg1;
+ (id)valueWithPointer:(void*)arg1;
+ (id)weakPointerValueArrayFromArray:(id)arg1;
+ (id)weakPointerValueSetFromSet:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithNonretainedObject:(id)arg1;
- (id)initWithPointer:(void*)arg1;
- (bool)isEqual:(id)arg1;
- (id)nonretainedObjectValue;
- (void*)pointerValue;

@end
