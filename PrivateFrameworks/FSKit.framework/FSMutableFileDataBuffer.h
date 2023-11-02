
@interface FSMutableFileDataBuffer : FSFileDataBuffer

+ (id)dataWithCapacity:(unsigned long long)arg1;
+ (id)dataWithLength:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (unsigned long long)capacity;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void*)mutableBytes;

@end
