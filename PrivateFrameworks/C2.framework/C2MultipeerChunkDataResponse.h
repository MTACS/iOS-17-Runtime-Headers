
@interface C2MultipeerChunkDataResponse : NSObject <NSSecureCoding> {
    NSData * _chunkData;
    NSUUID * _requestUUID;
}

@property (nonatomic, retain) NSData *chunkData;
@property (nonatomic, retain) NSUUID *requestUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chunkData;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requestUUID;
- (void)setChunkData:(id)arg1;
- (void)setRequestUUID:(id)arg1;

@end
