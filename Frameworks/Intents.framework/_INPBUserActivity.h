
@interface _INPBUserActivity : PBCodable <NSCopying, NSSecureCoding, _INPBUserActivity> {
    NSData * _data;
    struct { }  _has;
    NSString * _title;
    NSString * _uri;
}

@property (nonatomic, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasData;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, readonly) bool hasUri;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *uri;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasData;
- (bool)hasTitle;
- (bool)hasUri;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setData:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUri:(id)arg1;
- (id)title;
- (id)uri;
- (void)writeTo:(id)arg1;

@end
