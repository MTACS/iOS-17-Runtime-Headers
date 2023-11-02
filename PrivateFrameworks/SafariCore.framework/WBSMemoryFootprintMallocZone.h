
@interface WBSMemoryFootprintMallocZone : NSObject <NSSecureCoding> {
    unsigned long long  _addr;
    NSString * _name;
    struct malloc_statistics_t { 
        unsigned int blocks_in_use; 
        unsigned long long size_in_use; 
        unsigned long long max_size_in_use; 
        unsigned long long size_allocated; 
    }  _statistics;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long sizeAllocated;
@property (nonatomic, readonly) unsigned long long sizeInUse;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMallocZone:(struct _malloc_zone_t { void *x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); char *x10; int (*x11)(); int (*x12)(); struct malloc_introspection_t {} *x13; unsigned int x14; int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); }*)arg1;
- (id)name;
- (unsigned long long)sizeAllocated;
- (unsigned long long)sizeInUse;

@end
