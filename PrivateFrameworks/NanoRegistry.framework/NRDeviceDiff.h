
@interface NRDeviceDiff : NRDiffBase <NSFastEnumeration> {
    NSDictionary * _diffPropertyDiffs;
}

@property (nonatomic, readonly) NRPBDeviceDiff *protobuf;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allPropertyNames;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)diffPropertyDiffForName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDiffPropertyDiffs:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)protobuf;

@end
