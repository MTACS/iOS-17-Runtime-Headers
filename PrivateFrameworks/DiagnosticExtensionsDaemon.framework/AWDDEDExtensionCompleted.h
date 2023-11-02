
@interface AWDDEDExtensionCompleted : PBCodable <NSCopying> {
    unsigned long long  _duration;
    int  _error;
    NSString * _extension;
    struct { 
        unsigned int duration : 1; 
        unsigned int numbytes : 1; 
        unsigned int numfiles : 1; 
        unsigned int timestamp : 1; 
        unsigned int error : 1; 
    }  _has;
    unsigned long long  _numbytes;
    unsigned long long  _numfiles;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) int error;
@property (nonatomic, retain) NSString *extension;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasError;
@property (nonatomic, readonly) bool hasExtension;
@property (nonatomic) bool hasNumbytes;
@property (nonatomic) bool hasNumfiles;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long numbytes;
@property (nonatomic) unsigned long long numfiles;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (int)StringAsError:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (int)error;
- (id)errorAsString:(int)arg1;
- (id)extension;
- (bool)hasDuration;
- (bool)hasError;
- (bool)hasExtension;
- (bool)hasNumbytes;
- (bool)hasNumfiles;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numbytes;
- (unsigned long long)numfiles;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setError:(int)arg1;
- (void)setExtension:(id)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasNumbytes:(bool)arg1;
- (void)setHasNumfiles:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNumbytes:(unsigned long long)arg1;
- (void)setNumfiles:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
