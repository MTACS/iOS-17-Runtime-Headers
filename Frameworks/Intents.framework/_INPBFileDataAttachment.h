
@interface _INPBFileDataAttachment : PBCodable <NSCopying, NSSecureCoding, _INPBFileDataAttachment> {
    NSData * _data;
    NSString * _fileName;
    struct { }  _has;
}

@property (nonatomic, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fileName;
@property (nonatomic, readonly) bool hasData;
@property (nonatomic, readonly) bool hasFileName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;
- (bool)hasData;
- (bool)hasFileName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setData:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
