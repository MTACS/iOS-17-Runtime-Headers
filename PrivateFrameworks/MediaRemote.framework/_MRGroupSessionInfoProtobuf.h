
@interface _MRGroupSessionInfoProtobuf : PBCodable <NSCopying> {
    NSString * _hostDisplayName;
    bool  _hosted;
    NSString * _identifier;
    int  _routeType;
}

@property (nonatomic, retain) NSString *hostDisplayName;
@property (nonatomic) bool hosted;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) int routeType;

- (void).cxx_destruct;
- (int)StringAsRouteType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)hostDisplayName;
- (bool)hosted;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)routeType;
- (id)routeTypeAsString:(int)arg1;
- (void)setHostDisplayName:(id)arg1;
- (void)setHosted:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRouteType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
