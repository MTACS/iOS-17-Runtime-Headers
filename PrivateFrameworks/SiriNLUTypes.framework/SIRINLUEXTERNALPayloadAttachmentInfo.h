
@interface SIRINLUEXTERNALPayloadAttachmentInfo : PBCodable <NSCopying> {
    int  _attachmentType;
    struct { 
        unsigned int attachmentType : 1; 
    }  _has;
}

@property (nonatomic) int attachmentType;
@property (nonatomic) bool hasAttachmentType;

- (int)StringAsAttachmentType:(id)arg1;
- (int)attachmentType;
- (id)attachmentTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAttachmentType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttachmentType:(int)arg1;
- (void)setHasAttachmentType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
