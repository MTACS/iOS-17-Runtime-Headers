
@interface VisionCoreTensorShape : NSObject <NSCopying, NSSecureCoding> {
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _sizes;
}

@property (nonatomic, readonly) unsigned long long elementCount;
@property (nonatomic, readonly) unsigned long long rank;
@property (nonatomic, readonly) const unsigned long long*sizes;
@property (readonly, copy) NSArray *sizesAsNSNumberArray;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)elementCount;
- (void)encodeWithCoder:(id)arg1;
- (bool)getOneDimensionalArrayDimensionIndex:(unsigned long long*)arg1 error:(id*)arg2;
- (unsigned long long)hash;
- (id)initWithBatchNumber:(unsigned long long)arg1 channels:(unsigned long long)arg2 height:(unsigned long long)arg3 width:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageChannels:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (id)initWithPixelFormatType:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (id)initWithSizes:(const unsigned long long*)arg1 rank:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)rank;
- (const unsigned long long*)sizes;
- (id)sizesAsNSNumberArray;

@end
