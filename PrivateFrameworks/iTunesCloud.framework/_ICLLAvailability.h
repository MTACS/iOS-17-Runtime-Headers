
@interface _ICLLAvailability : PBCodable <NSCopying> {
    bool  _autoPlay;
    struct { 
        unsigned int autoPlay : 1; 
    }  _has;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _repeatModes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _shuffleModes;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
