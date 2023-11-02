
@interface VCMediaNegotiationBlobMultiwayAudioStream : PBCodable <NSCopying> {
    struct { 
        unsigned int maxMediaBitrate : 1; 
        unsigned int maxNetworkBitrate : 1; 
        unsigned int maxPacketsPerSecond : 1; 
        unsigned int repairedMaxNetworkBitrate : 1; 
        unsigned int repairedStreamID : 1; 
        unsigned int supportedPayloads : 1; 
    }  _has;
    unsigned int  _maxMediaBitrate;
    unsigned int  _maxNetworkBitrate;
    float  _maxPacketsPerSecond;
    unsigned int  _qualityIndex;
    unsigned int  _repairedMaxNetworkBitrate;
    unsigned int  _repairedStreamID;
    unsigned int  _ssrc;
    unsigned int  _streamID;
    unsigned int  _supportedPayloads;
}

@property (nonatomic) bool hasMaxMediaBitrate;
@property (nonatomic) bool hasMaxNetworkBitrate;
@property (nonatomic) bool hasMaxPacketsPerSecond;
@property (nonatomic) bool hasRepairedMaxNetworkBitrate;
@property (nonatomic) bool hasRepairedStreamID;
@property (nonatomic) bool hasSupportedPayloads;
@property (nonatomic) unsigned int maxMediaBitrate;
@property (nonatomic) unsigned int maxNetworkBitrate;
@property (nonatomic) float maxPacketsPerSecond;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) unsigned int repairedMaxNetworkBitrate;
@property (nonatomic) unsigned int repairedStreamID;
@property (nonatomic) unsigned int ssrc;
@property (nonatomic) unsigned int streamID;
@property (nonatomic) unsigned int supportedPayloads;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxMediaBitrate;
- (bool)hasMaxNetworkBitrate;
- (bool)hasMaxPacketsPerSecond;
- (bool)hasRepairedMaxNetworkBitrate;
- (bool)hasRepairedStreamID;
- (bool)hasSupportedPayloads;
- (unsigned long long)hash;
- (id)initWithStreamConfig:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxMediaBitrate;
- (unsigned int)maxNetworkBitrate;
- (float)maxPacketsPerSecond;
- (void)mergeFrom:(id)arg1;
- (id)newMultiwayAudioStream;
- (void)printWithLogFile:(void*)arg1;
- (unsigned int)qualityIndex;
- (bool)readFrom:(id)arg1;
- (unsigned int)repairedMaxNetworkBitrate;
- (unsigned int)repairedStreamID;
- (void)setHasMaxMediaBitrate:(bool)arg1;
- (void)setHasMaxNetworkBitrate:(bool)arg1;
- (void)setHasMaxPacketsPerSecond:(bool)arg1;
- (void)setHasRepairedMaxNetworkBitrate:(bool)arg1;
- (void)setHasRepairedStreamID:(bool)arg1;
- (void)setHasSupportedPayloads:(bool)arg1;
- (void)setMaxMediaBitrate:(unsigned int)arg1;
- (void)setMaxNetworkBitrate:(unsigned int)arg1;
- (void)setMaxPacketsPerSecond:(float)arg1;
- (void)setPayloadFlagsWithPayloads:(id)arg1;
- (void)setQualityIndex:(unsigned int)arg1;
- (void)setRepairedMaxNetworkBitrate:(unsigned int)arg1;
- (void)setRepairedStreamID:(unsigned int)arg1;
- (void)setSsrc:(unsigned int)arg1;
- (void)setStreamID:(unsigned int)arg1;
- (void)setSupportedPayloads:(unsigned int)arg1;
- (unsigned int)ssrc;
- (unsigned int)streamID;
- (unsigned int)supportedPayloads;
- (void)writeTo:(id)arg1;

@end
