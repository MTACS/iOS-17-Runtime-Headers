
@interface TCDialRequest : TUDialRequest {
    bool  _remoteUplinkMuted;
    unsigned long long  _state;
}

@property (getter=isRemoteUplinkMuted, nonatomic) bool remoteUplinkMuted;
@property (nonatomic) unsigned long long state;

- (id)URL;
- (id)initWithURL:(id)arg1;
- (bool)isRemoteUplinkMuted;
- (void)setRemoteUplinkMuted:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
