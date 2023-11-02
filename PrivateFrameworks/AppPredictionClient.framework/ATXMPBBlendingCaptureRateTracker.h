
@interface ATXMPBBlendingCaptureRateTracker : PBCodable <NSCopying> {
    NSString * _abGroup;
    int  _captureType;
    bool  _captured;
    NSString * _consumerSubType;
    NSString * _executableType;
    struct { 
        unsigned int captureType : 1; 
        unsigned int captured : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic) int captureType;
@property (nonatomic) bool captured;
@property (nonatomic, retain) NSString *consumerSubType;
@property (nonatomic, retain) NSString *executableType;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic) bool hasCaptureType;
@property (nonatomic) bool hasCaptured;
@property (nonatomic, readonly) bool hasConsumerSubType;
@property (nonatomic, readonly) bool hasExecutableType;

- (void).cxx_destruct;
- (int)StringAsCaptureType:(id)arg1;
- (id)abGroup;
- (int)captureType;
- (id)captureTypeAsString:(int)arg1;
- (bool)captured;
- (id)consumerSubType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)executableType;
- (bool)hasAbGroup;
- (bool)hasCaptureType;
- (bool)hasCaptured;
- (bool)hasConsumerSubType;
- (bool)hasExecutableType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setCaptureType:(int)arg1;
- (void)setCaptured:(bool)arg1;
- (void)setConsumerSubType:(id)arg1;
- (void)setExecutableType:(id)arg1;
- (void)setHasCaptureType:(bool)arg1;
- (void)setHasCaptured:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
