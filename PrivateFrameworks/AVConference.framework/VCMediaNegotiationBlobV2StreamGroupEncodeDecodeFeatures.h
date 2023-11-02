
@interface VCMediaNegotiationBlobV2StreamGroupEncodeDecodeFeatures : PBCodable <NSCopying> {
    NSData * _encodeDecodeFeatures;
    struct { 
        unsigned int rtpPayload : 1; 
    }  _has;
    unsigned int  _rtpPayload;
}

@property (nonatomic, retain) NSData *encodeDecodeFeatures;
@property (nonatomic, readonly) bool hasEncodeDecodeFeatures;
@property (nonatomic) bool hasRtpPayload;
@property (nonatomic) unsigned int rtpPayload;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encodeDecodeFeatures;
- (bool)hasEncodeDecodeFeatures;
- (bool)hasRtpPayload;
- (unsigned long long)hash;
- (id)initWithPayload:(id)arg1 encodeDecodeFeatures:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)rtpPayload;
- (void)setEncodeDecodeFeatures:(id)arg1;
- (void)setHasRtpPayload:(bool)arg1;
- (void)setRtpPayload:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
