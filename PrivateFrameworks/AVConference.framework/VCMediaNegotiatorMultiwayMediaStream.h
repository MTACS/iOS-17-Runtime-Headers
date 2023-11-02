
@interface VCMediaNegotiatorMultiwayMediaStream : NSObject <NSCopying> {
    bool  _hasRepairedStreamID;
    bool  _isSubstream;
    unsigned int  _maxMediaBitrate;
    unsigned int  _maxNetworkBitrate;
    unsigned int  _maxPacketsPerSecond;
    unsigned int  _qualityIndex;
    unsigned int  _repairedMaxNetworkBitrate;
    unsigned short  _repairedStreamID;
    unsigned int  _ssrc;
    unsigned short  _streamID;
}

@property (nonatomic) bool hasRepairedStreamID;
@property (nonatomic) bool isSubstream;
@property (nonatomic) unsigned int maxMediaBitrate;
@property (nonatomic) unsigned int maxNetworkBitrate;
@property (nonatomic) unsigned int maxPacketsPerSecond;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) unsigned int repairedMaxNetworkBitrate;
@property (nonatomic) unsigned short repairedStreamID;
@property (nonatomic) unsigned int ssrc;
@property (nonatomic) unsigned short streamID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasRepairedStreamID;
- (bool)isEqual:(id)arg1;
- (bool)isSubstream;
- (unsigned int)maxMediaBitrate;
- (unsigned int)maxNetworkBitrate;
- (unsigned int)maxPacketsPerSecond;
- (unsigned int)qualityIndex;
- (unsigned int)repairedMaxNetworkBitrate;
- (unsigned short)repairedStreamID;
- (void)setHasRepairedStreamID:(bool)arg1;
- (void)setIsSubstream:(bool)arg1;
- (void)setMaxMediaBitrate:(unsigned int)arg1;
- (void)setMaxNetworkBitrate:(unsigned int)arg1;
- (void)setMaxPacketsPerSecond:(unsigned int)arg1;
- (void)setQualityIndex:(unsigned int)arg1;
- (void)setRepairedMaxNetworkBitrate:(unsigned int)arg1;
- (void)setRepairedStreamID:(unsigned short)arg1;
- (void)setSsrc:(unsigned int)arg1;
- (void)setStreamID:(unsigned short)arg1;
- (unsigned int)ssrc;
- (unsigned short)streamID;

@end
