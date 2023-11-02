
@interface MNTraceNetworkEvent : NSObject <MNTracePlayerTimelineStreamObjectType> {
    bool  _cellEnabled;
    bool  _nlcEnabled;
    NSString * _nlcProfile;
    double  _timestamp;
    bool  _wifiEnabled;
}

@property (nonatomic) bool cellEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool nlcEnabled;
@property (nonatomic, copy) NSString *nlcProfile;
@property (nonatomic, readonly) double position;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic) bool wifiEnabled;

- (void).cxx_destruct;
- (bool)cellEnabled;
- (bool)isEqual:(id)arg1;
- (bool)nlcEnabled;
- (id)nlcProfile;
- (double)position;
- (void)setCellEnabled:(bool)arg1;
- (void)setNlcEnabled:(bool)arg1;
- (void)setNlcProfile:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setWifiEnabled:(bool)arg1;
- (double)timestamp;
- (bool)wifiEnabled;

@end
