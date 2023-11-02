
@interface _INPBStartCallRequestMetadata : PBCodable <NSCopying, NSSecureCoding, _INPBStartCallRequestMetadata> {
    bool  _appInferred;
    struct { 
        unsigned int appInferred : 1; 
    }  _has;
}

@property (nonatomic) bool appInferred;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAppInferred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (bool)appInferred;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAppInferred;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppInferred:(bool)arg1;
- (void)setHasAppInferred:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
