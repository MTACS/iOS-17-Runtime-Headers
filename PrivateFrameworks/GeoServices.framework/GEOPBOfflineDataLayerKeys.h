
@interface GEOPBOfflineDataLayerKeys : PBCodable <NSCopying> {
    struct { 
        unsigned int has_layerVersion : 1; 
    }  _flags;
    NSMutableArray * _keyValueReferences;
    struct GEOPBOfflineDataLayerVersion { 
        int _layer; 
        unsigned long long _version; 
        struct { 
            unsigned int layer : 1; 
            unsigned int version : 1; 
        } _has; 
    }  _layerVersion;
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
