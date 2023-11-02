
@interface C2MultipeerDiscoveryResponse : NSObject <NSSecureCoding> {
    bool  _chunkAvailable;
    NSData * _chunkSignature;
    NSUUID * _requestUUID;
}

@property (nonatomic) bool chunkAvailable;
@property (nonatomic, retain) NSData *chunkSignature;
@property (nonatomic, retain) NSUUID *requestUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)chunkAvailable;
- (id)chunkSignature;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requestUUID;
- (void)setChunkAvailable:(bool)arg1;
- (void)setChunkSignature:(id)arg1;
- (void)setRequestUUID:(id)arg1;

@end
