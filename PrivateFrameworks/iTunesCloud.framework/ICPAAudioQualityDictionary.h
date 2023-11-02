
@interface ICPAAudioQualityDictionary : PBCodable <NSCopying> {
    long long  _bitDepth;
    long long  _bitRate;
    NSString * _channelLayoutDescription;
    unsigned int  _codec;
    struct { 
        unsigned int bitDepth : 1; 
        unsigned int bitRate : 1; 
        unsigned int sampleRate : 1; 
        unsigned int codec : 1; 
        unsigned int isSpatialized : 1; 
    }  _has;
    bool  _isSpatialized;
    long long  _sampleRate;
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
