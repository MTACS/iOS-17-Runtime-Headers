
@interface BMPBMicroLocationTruthTagEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    NSString * _clientBundleId;
    struct { 
        unsigned int absoluteTimestamp : 1; 
    }  _has;
    NSString * _recordingRequestIdentifier;
    NSString * _truthTagIdentifier;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, retain) NSString *clientBundleId;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic, readonly) bool hasClientBundleId;
@property (nonatomic, readonly) bool hasRecordingRequestIdentifier;
@property (nonatomic, readonly) bool hasTruthTagIdentifier;
@property (nonatomic, retain) NSString *recordingRequestIdentifier;
@property (nonatomic, retain) NSString *truthTagIdentifier;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)clientBundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbsoluteTimestamp;
- (bool)hasClientBundleId;
- (bool)hasRecordingRequestIdentifier;
- (bool)hasTruthTagIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordingRequestIdentifier;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setClientBundleId:(id)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setRecordingRequestIdentifier:(id)arg1;
- (void)setTruthTagIdentifier:(id)arg1;
- (id)truthTagIdentifier;
- (void)writeTo:(id)arg1;

@end
