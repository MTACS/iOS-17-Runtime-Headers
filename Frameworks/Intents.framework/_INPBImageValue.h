
@interface _INPBImageValue : PBCodable <NSCopying, NSSecureCoding, _INPBImageValue> {
    NSData * _data;
    struct { 
        unsigned int height : 1; 
        unsigned int renderingMode : 1; 
        unsigned int type : 1; 
        unsigned int width : 1; 
    }  _has;
    double  _height;
    NSString * _proxyServiceIdentifier;
    int  _renderingMode;
    int  _type;
    NSString * _uri;
    _INPBValueMetadata * _valueMetadata;
    double  _width;
}

@property (nonatomic, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasData;
@property (nonatomic) bool hasHeight;
@property (nonatomic, readonly) bool hasProxyServiceIdentifier;
@property (nonatomic) bool hasRenderingMode;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUri;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (nonatomic) bool hasWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) double height;
@property (nonatomic, copy) NSString *proxyServiceIdentifier;
@property (nonatomic) int renderingMode;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;
@property (nonatomic) double width;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsRenderingMode:(id)arg1;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasData;
- (bool)hasHeight;
- (bool)hasProxyServiceIdentifier;
- (bool)hasRenderingMode;
- (bool)hasType;
- (bool)hasUri;
- (bool)hasValueMetadata;
- (bool)hasWidth;
- (unsigned long long)hash;
- (double)height;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)proxyServiceIdentifier;
- (bool)readFrom:(id)arg1;
- (int)renderingMode;
- (id)renderingModeAsString:(int)arg1;
- (void)setData:(id)arg1;
- (void)setHasHeight:(bool)arg1;
- (void)setHasRenderingMode:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setHeight:(double)arg1;
- (void)setProxyServiceIdentifier:(id)arg1;
- (void)setRenderingMode:(int)arg1;
- (void)setType:(int)arg1;
- (void)setUri:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (void)setWidth:(double)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)uri;
- (id)valueMetadata;
- (double)width;
- (void)writeTo:(id)arg1;

@end
