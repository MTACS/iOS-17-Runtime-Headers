
@interface SidecarDisplayConfig : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _cipher;
    NSNumber * _codec;
    NSNumber * _configureDisplayExclusiveMode;
    NSNumber * _dataLink;
    SidecarDevice * _device;
    NSNumber * _displayID;
    NSNumber * _enableTimeSync;
    NSNumber * _framerate;
    NSNumber * _hdr;
    NSNumber * _keyFrameInterval;
    NSNumber * _lowLatency;
    NSNumber * _rtcp;
    NSNumber * _rtcpTimeoutInterval;
    double  _scale;
    NSString * _service;
    NSNumber * _showSideBar;
    NSNumber * _showTouchBar;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSNumber * _tilesPerFrame;
    long long  _transport;
    NSNumber * _txMaxBitrate;
    NSNumber * _txMinBitrate;
}

@property (nonatomic, retain) NSNumber *cipher;
@property (nonatomic, retain) NSNumber *codec;
@property (nonatomic, retain) NSNumber *configureDisplayExclusiveMode;
@property (nonatomic, retain) NSNumber *dataLink;
@property (nonatomic, retain) SidecarDevice *device;
@property (nonatomic, retain) NSNumber *displayID;
@property (nonatomic, retain) NSNumber *enableTimeSync;
@property (nonatomic, retain) NSNumber *framerate;
@property (nonatomic, retain) NSNumber *hdr;
@property (nonatomic, retain) NSNumber *keyFrameInterval;
@property (nonatomic, retain) NSNumber *lowLatency;
@property (nonatomic, retain) NSNumber *rtcp;
@property (nonatomic, retain) NSNumber *rtcpTimeoutInterval;
@property (nonatomic) double scale;
@property (nonatomic, copy) NSString *service;
@property (nonatomic, retain) NSNumber *showSideBar;
@property (nonatomic, retain) NSNumber *showTouchBar;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) NSNumber *tilesPerFrame;
@property (nonatomic) long long transport;
@property (nonatomic, retain) NSNumber *txMaxBitrate;
@property (nonatomic, retain) NSNumber *txMinBitrate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cipher;
- (id)codec;
- (id)configureDisplayExclusiveMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataLink;
- (id)device;
- (id)displayID;
- (id)enableTimeSync;
- (void)encodeWithCoder:(id)arg1;
- (id)framerate;
- (id)hdr;
- (id)initWithCoder:(id)arg1;
- (id)keyFrameInterval;
- (id)lowLatency;
- (id)rtcp;
- (id)rtcpTimeoutInterval;
- (double)scale;
- (id)service;
- (void)setCipher:(id)arg1;
- (void)setCodec:(id)arg1;
- (void)setConfigureDisplayExclusiveMode:(id)arg1;
- (void)setDataLink:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setDisplayID:(id)arg1;
- (void)setEnableTimeSync:(id)arg1;
- (void)setFramerate:(id)arg1;
- (void)setHdr:(id)arg1;
- (void)setKeyFrameInterval:(id)arg1;
- (void)setLowLatency:(id)arg1;
- (void)setRtcp:(id)arg1;
- (void)setRtcpTimeoutInterval:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setService:(id)arg1;
- (void)setShowSideBar:(id)arg1;
- (void)setShowTouchBar:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTilesPerFrame:(id)arg1;
- (void)setTransport:(long long)arg1;
- (void)setTxMaxBitrate:(id)arg1;
- (void)setTxMinBitrate:(id)arg1;
- (id)showSideBar;
- (id)showTouchBar;
- (struct CGSize { double x1; double x2; })size;
- (id)tilesPerFrame;
- (long long)transport;
- (id)txMaxBitrate;
- (id)txMinBitrate;

@end
