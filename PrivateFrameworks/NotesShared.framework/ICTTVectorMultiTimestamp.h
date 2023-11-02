
@interface ICTTVectorMultiTimestamp : NSObject <NSCopying> {
    NSArray * _timestamps;
}

@property (nonatomic, readonly) bool isDocumentShared;
@property (nonatomic, retain) NSArray *timestamps;

- (void).cxx_destruct;
- (id)clockElementForUUID:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)clockForUUID:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)compareTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithArchive:(const void*)arg1 andCapacity:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithData:(id)arg1 andCapacity:(unsigned long long)arg2;
- (id)initWithTimestamps:(id)arg1;
- (bool)isDocumentShared;
- (bool)isEqual:(id)arg1;
- (void)mergeWithTimestamp:(id)arg1;
- (void)saveToArchive:(void*)arg1;
- (id)serialize;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)setTimestamps:(id)arg1;
- (id)sortedUUIDs;
- (id)timestamps;

@end
