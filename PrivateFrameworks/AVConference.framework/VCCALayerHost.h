
@interface VCCALayerHost : CALayerHost {
    AVCRemoteVideoClient * remoteVideoClient;
}

- (id)initWithRemoteVideoClient:(id)arg1;
- (void)layoutSublayers;

@end
