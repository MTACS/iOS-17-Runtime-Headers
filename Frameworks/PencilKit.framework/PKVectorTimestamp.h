
@interface PKVectorTimestamp : NSObject <CHStrokeProviderVersion, NSCopying> {
    NSMutableDictionary * _clock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allUUIDs;
- (id)clockElementForUUID:(id)arg1;
- (unsigned long long)clockForUUID:(id)arg1;
- (long long)compareClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;
- (unsigned long long)compareTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (void)incrementClockForUUID:(id)arg1;
- (id)init;
- (id)initWithArchive:(const void*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (void)mergeWithTimestamp:(id)arg1;
- (void)saveToArchive:(void*)arg1;
- (id)serialize;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;
- (id)shortDescription;
- (id)sortedUUIDs;
- (unsigned long long)subclockForUUID:(id)arg1;
- (void)unionClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;

@end
