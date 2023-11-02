
@interface MRSetArtworkMessage : MRProtocolMessage

@property (nonatomic, readonly) NSData *artworkData;

- (id)artworkData;
- (id)initWithArtworkData:(id)arg1;
- (unsigned long long)type;

@end
