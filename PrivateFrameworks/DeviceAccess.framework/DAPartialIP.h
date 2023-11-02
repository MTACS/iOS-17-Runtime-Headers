
@interface DAPartialIP : NSObject <CUXPCCodable, NSSecureCoding> {
    NSData * _address;
    NSData * _mask;
}

@property (nonatomic, readonly, copy) NSData *address;
@property (nonatomic, readonly, copy) NSData *mask;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithAddress:(id)arg1 mask:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)mask;

@end
