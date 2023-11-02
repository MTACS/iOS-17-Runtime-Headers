
@interface _MRPresentRouteAuthorizationStatusMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    }  _has;
    _MRAVOutputDeviceDescriptorProtobuf * _route;
    int  _status;
}

@property (nonatomic, readonly) bool hasRoute;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) _MRAVOutputDeviceDescriptorProtobuf *route;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRoute;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)route;
- (void)setHasStatus:(bool)arg1;
- (void)setRoute:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
