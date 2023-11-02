
@interface _MRPromptForRouteAuthorizationMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int inputType : 1; 
    }  _has;
    int  _inputType;
    _MRAVOutputDeviceDescriptorProtobuf * _route;
}

@property (nonatomic) bool hasInputType;
@property (nonatomic, readonly) bool hasRoute;
@property (nonatomic) int inputType;
@property (nonatomic, retain) _MRAVOutputDeviceDescriptorProtobuf *route;

- (void).cxx_destruct;
- (int)StringAsInputType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInputType;
- (bool)hasRoute;
- (unsigned long long)hash;
- (int)inputType;
- (id)inputTypeAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)route;
- (void)setHasInputType:(bool)arg1;
- (void)setInputType:(int)arg1;
- (void)setRoute:(id)arg1;
- (void)writeTo:(id)arg1;

@end
