
@interface GEOPDSearchRewrittenQueryNonPayloadField : PBCodable <NSCopying> {
    struct { 
        unsigned int has_pipelineType : 1; 
        unsigned int has_hasCamelCase : 1; 
        unsigned int has_hasDirectionsIntent : 1; 
        unsigned int has_hasEmojiRewrite : 1; 
        unsigned int has_hasNumericSplit : 1; 
        unsigned int has_hasSynonymCounterpart : 1; 
    }  _flags;
    bool  _hasCamelCase;
    bool  _hasDirectionsIntent;
    bool  _hasEmojiRewrite;
    bool  _hasNumericSplit;
    bool  _hasSynonymCounterpart;
    int  _pipelineType;
    NSString * _rewrittenQuery;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
