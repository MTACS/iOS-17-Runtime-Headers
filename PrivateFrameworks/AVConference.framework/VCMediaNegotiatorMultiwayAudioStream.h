
@interface VCMediaNegotiatorMultiwayAudioStream : VCMediaNegotiatorMultiwayMediaStream <NSCopying> {
    NSMutableSet * _supportedAudioPayloads;
}

@property (nonatomic, retain) NSSet *supportedAudioPayloads;

- (void)addPayload:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setSupportedAudioPayloads:(id)arg1;
- (id)supportedAudioPayloads;

@end
