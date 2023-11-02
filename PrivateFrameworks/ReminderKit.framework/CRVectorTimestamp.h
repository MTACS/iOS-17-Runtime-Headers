
@interface CRVectorTimestamp : NSObject <CRCoding, CRDataType, NSCopying> {
    NSMutableDictionary * _clock;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allUUIDs;
- (id)clockElementForUUID:(id)arg1;
- (unsigned long long)clockForUUID:(id)arg1;
- (unsigned long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (void)encodeIntoProtobufTimestamp:(void*)arg1 coder:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (void)incrementClockForUUID:(id)arg1;
- (id)init;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithProtobufTimestamp:(const void*)arg1 decoder:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)maxClock:(unsigned long long)arg1 forUUID:(id)arg2;
- (void)mergeWith:(id)arg1;
- (void)minusVectorTimestamp:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)removeUUID:(id)arg1;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;
- (void)setDocument:(id)arg1;
- (id)shortDescription;
- (id)sortedUUIDs;
- (unsigned long long)subclockForUUID:(id)arg1;
- (id)timestampForReplica:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

@end
