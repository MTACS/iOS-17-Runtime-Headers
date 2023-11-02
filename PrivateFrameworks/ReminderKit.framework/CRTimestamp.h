
@interface CRTimestamp : NSObject <CRCoding, CRDataType, CREquatable, NSCopying> {
    long long  _counter;
    NSUUID * _replica;
}

@property (nonatomic) long long counter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *replica;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)counter;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (id)earlierTimestamp:(id)arg1;
- (void)encodeIntoProtobufTimestamp:(void*)arg1 coder:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithProtobufTimestamp:(const void*)arg1 decoder:(id)arg2;
- (id)initWithReplica:(id)arg1 andCounter:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTimestamp:(id)arg1;
- (id)laterTimestamp:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)nextTimestamp;
- (id)nextTimestampForReplica:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)replica;
- (void)setCounter:(long long)arg1;
- (void)setDocument:(id)arg1;
- (void)setReplica:(id)arg1;
- (id)shortDescription;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

@end
