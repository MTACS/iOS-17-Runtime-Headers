
@interface REMReplicaManagerSerializedData : NSObject <NSSecureCoding> {
    NSData * _managerData;
    unsigned long long  _version;
}

@property (nonatomic, readonly) bool isRepresentingDiscardedReplicaManager;
@property (nonatomic, readonly) NSData *managerData;
@property (nonatomic, readonly) unsigned long long version;

+ (id)serializedDataRepresentingDiscardedReplicaManager;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagerData:(id)arg1 version:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isRepresentingDiscardedReplicaManager;
- (id)managerData;
- (unsigned long long)version;

@end
