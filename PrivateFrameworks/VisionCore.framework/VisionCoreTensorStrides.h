
@interface VisionCoreTensorStrides : NSObject <NSCopying, NSSecureCoding> {
    struct vector<long, std::allocator<long>> { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<long *, std::allocator<long>> { 
            long long *__value_; 
        } __end_cap_; 
    }  _byteOffsets;
}

@property (nonatomic, readonly) const long long*byteOffsets;
@property (nonatomic, readonly) unsigned long long rank;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const long long*)byteOffsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithByteOffsets:(const long long*)arg1 rank:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithShape:(id)arg1 dataType:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)rank;
- (id)shapeForPackedElementsOfType:(unsigned long long)arg1 error:(id*)arg2;

@end
