
@interface NRMiniUUIDSet : NSObject <NSCopying, NSSecureCoding> {
    NSData * _data;
    struct vector<unsigned int, std::allocator<unsigned int> > { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int> > { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _miniUUIDs;
}

@property (nonatomic, retain) NSData *data;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasUUID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithUUIDSet:(id)arg1;
- (void)setData:(id)arg1;

@end
