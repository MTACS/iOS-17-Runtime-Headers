
@interface NRDeviceCollectionDiff : NRDiffBase <NSFastEnumeration> {
    NSDictionary * _diffDeviceDiffs;
}

@property (nonatomic, readonly) NRPBDeviceCollectionDiff *protobuf;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allPairingIDs;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)diffCollectionDiffForPairingID:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceCollectionDiffDeviceDiffs:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)protobuf;

@end
