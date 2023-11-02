
@interface SIRINLUINTERNALInternalSpanData : PBCodable <NSCopying> {
    SIRINLUINTERNALMentionDetectorSpanData * _mentionDetectorSpanData;
    SIRINLUINTERNALMentionResolverSpanData * _mentionResolverSpanData;
    SIRINLUINTERNALOvertonKGSpanData * _overtonKgSpanData;
    SIRINLUINTERNALPLUMSpanData * _plumSpanData;
    SIRINLUINTERNALSiriVocabularySpanData * _siriVocabularySpanData;
}

@property (nonatomic, readonly) bool hasMentionDetectorSpanData;
@property (nonatomic, readonly) bool hasMentionResolverSpanData;
@property (nonatomic, readonly) bool hasOvertonKgSpanData;
@property (nonatomic, readonly) bool hasPlumSpanData;
@property (nonatomic, readonly) bool hasSiriVocabularySpanData;
@property (nonatomic, retain) SIRINLUINTERNALMentionDetectorSpanData *mentionDetectorSpanData;
@property (nonatomic, retain) SIRINLUINTERNALMentionResolverSpanData *mentionResolverSpanData;
@property (nonatomic, retain) SIRINLUINTERNALOvertonKGSpanData *overtonKgSpanData;
@property (nonatomic, retain) SIRINLUINTERNALPLUMSpanData *plumSpanData;
@property (nonatomic, retain) SIRINLUINTERNALSiriVocabularySpanData *siriVocabularySpanData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMentionDetectorSpanData;
- (bool)hasMentionResolverSpanData;
- (bool)hasOvertonKgSpanData;
- (bool)hasPlumSpanData;
- (bool)hasSiriVocabularySpanData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mentionDetectorSpanData;
- (id)mentionResolverSpanData;
- (void)mergeFrom:(id)arg1;
- (id)overtonKgSpanData;
- (id)plumSpanData;
- (bool)readFrom:(id)arg1;
- (void)setMentionDetectorSpanData:(id)arg1;
- (void)setMentionResolverSpanData:(id)arg1;
- (void)setOvertonKgSpanData:(id)arg1;
- (void)setPlumSpanData:(id)arg1;
- (void)setSiriVocabularySpanData:(id)arg1;
- (id)siriVocabularySpanData;
- (void)writeTo:(id)arg1;

@end
