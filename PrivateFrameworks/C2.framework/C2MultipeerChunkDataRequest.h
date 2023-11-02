
@interface C2MultipeerChunkDataRequest : NSObject <NSSecureCoding> {
    id /* block */  _chunkDataCallback;
    bool  _chunkDataRequested;
    NSUUID * _requestUUID;
}

@property (nonatomic, copy) id /* block */ chunkDataCallback;
@property (nonatomic) bool chunkDataRequested;
@property (nonatomic, retain) NSUUID *requestUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)chunkDataCallback;
- (bool)chunkDataRequested;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requestUUID;
- (void)setChunkDataCallback:(id /* block */)arg1;
- (void)setChunkDataRequested:(bool)arg1;
- (void)setRequestUUID:(id)arg1;

@end
