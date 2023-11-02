
@interface _MRAudioRouteProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
        unsigned int spatializationEnabled : 1; 
        unsigned int supportsSpatialization : 1; 
    }  _has;
    NSString * _name;
    bool  _spatializationEnabled;
    bool  _supportsSpatialization;
    int  _type;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasSpatializationEnabled;
@property (nonatomic) bool hasSupportsSpatialization;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool spatializationEnabled;
@property (nonatomic) bool supportsSpatialization;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasSpatializationEnabled;
- (bool)hasSupportsSpatialization;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setHasSpatializationEnabled:(bool)arg1;
- (void)setHasSupportsSpatialization:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSpatializationEnabled:(bool)arg1;
- (void)setSupportsSpatialization:(bool)arg1;
- (void)setType:(int)arg1;
- (bool)spatializationEnabled;
- (bool)supportsSpatialization;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
