
@interface PCMediaRemoteDisplayContext : PCDisplayContext {
    MRNowPlayingPlayerResponse * _localDeviceState;
    NSString * _mediaRemoteID;
    MRNowPlayingPlayerResponse * _proxDeviceState;
    MRNowPlayingPlayerResponse * _selectedDeviceState;
}

@property (nonatomic, copy) MRNowPlayingPlayerResponse *localDeviceState;
@property (nonatomic, copy) NSString *mediaRemoteID;
@property (nonatomic, copy) MRNowPlayingPlayerResponse *proxDeviceState;
@property (nonatomic, copy) MRNowPlayingPlayerResponse *selectedDeviceState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localDeviceState;
- (id)mediaRemoteID;
- (id)proxDeviceState;
- (id)selectedDeviceState;
- (void)setLocalDeviceState:(id)arg1;
- (void)setMediaRemoteID:(id)arg1;
- (void)setProxDeviceState:(id)arg1;
- (void)setSelectedDeviceState:(id)arg1;
- (id)userActivityInfo;

@end
