
@interface VCCCMessageWrapper : PBCodable <NSCopying> {
    VCCCMessageAcknowledgment * _acknowledgement;
    int  _content;
    struct { 
        unsigned int content : 1; 
    }  _has;
    VCCCMessage * _message;
}

@property (nonatomic, retain) VCCCMessageAcknowledgment *acknowledgement;
@property (nonatomic) int content;
@property (nonatomic, readonly) bool hasAcknowledgement;
@property (nonatomic) bool hasContent;
@property (nonatomic, readonly) bool hasMessage;
@property (nonatomic, retain) VCCCMessage *message;

- (int)StringAsContent:(id)arg1;
- (id)acknowledgement;
- (void)clearOneofValuesForContent;
- (int)content;
- (id)contentAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAcknowledgement;
- (bool)hasContent;
- (bool)hasMessage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)message;
- (bool)readFrom:(id)arg1;
- (void)setAcknowledgement:(id)arg1;
- (void)setContent:(int)arg1;
- (void)setHasContent:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
