
@interface _INPBAnnouncement : PBCodable <NSCopying, NSSecureCoding, _INPBAnnouncement> {
    unsigned long long  _endTime;
    struct { 
        unsigned int endTime : 1; 
        unsigned int startTime : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _speechDataTranscription;
    _INPBURLValue * _speechDataURL;
    unsigned long long  _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) bool hasEndTime;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasSpeechDataTranscription;
@property (nonatomic, readonly) bool hasSpeechDataURL;
@property (nonatomic) bool hasStartTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *speechDataTranscription;
@property (nonatomic, retain) _INPBURLValue *speechDataURL;
@property (nonatomic) unsigned long long startTime;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)endTime;
- (bool)hasEndTime;
- (bool)hasIdentifier;
- (bool)hasSpeechDataTranscription;
- (bool)hasSpeechDataURL;
- (bool)hasStartTime;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndTime:(unsigned long long)arg1;
- (void)setHasEndTime:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSpeechDataTranscription:(id)arg1;
- (void)setSpeechDataURL:(id)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (id)speechDataTranscription;
- (id)speechDataURL;
- (unsigned long long)startTime;
- (void)writeTo:(id)arg1;

@end
