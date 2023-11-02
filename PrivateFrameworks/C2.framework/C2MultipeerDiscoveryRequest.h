
@interface C2MultipeerDiscoveryRequest : NSObject <NSSecureCoding> {
    NSData * _chunkSignature;
    NSString * _containerIdentifier;
    NSUUID * _requestUUID;
}

@property (nonatomic, retain) NSData *chunkSignature;
@property (nonatomic, retain) NSString *containerIdentifier;
@property (nonatomic, retain) NSUUID *requestUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chunkSignature;
- (id)containerIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requestUUID;
- (void)setChunkSignature:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setRequestUUID:(id)arg1;

@end
