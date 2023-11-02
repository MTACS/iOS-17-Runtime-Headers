
@interface _ICLLPlaybackControlSettings : PBCodable <NSCopying> {
    _ICLLAutoPlaySource * _autoPlay;
    _ICLLAvailability * _availability;
    struct { 
        unsigned int repeatMode : 1; 
        unsigned int shuffleMode : 1; 
        unsigned int trackGenerationSource : 1; 
    }  _has;
    _ICLLNoGenerationSource * _noGeneration;
    _ICLLRadioSource * _radio;
    int  _repeatMode;
    int  _shuffleMode;
    int  _trackGenerationSource;
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
