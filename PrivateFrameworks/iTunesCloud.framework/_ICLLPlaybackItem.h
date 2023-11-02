
@interface _ICLLPlaybackItem : PBCodable <NSCopying> {
    _ICLLPlaybackItemContainer * _container;
    long long  _contributingParticipantId;
    struct { 
        unsigned int contributingParticipantId : 1; 
        unsigned int sectionType : 1; 
        unsigned int isExplicit : 1; 
    }  _has;
    bool  _isExplicit;
    NSString * _itemId;
    NSString * _mediaId;
    _ICLLMediaInfo * _mediaInfo;
    int  _sectionType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
