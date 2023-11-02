
@interface _CPRange : PBCodable <NSSecureCoding, _CPRange> {
    unsigned long long  _length;
    unsigned long long  _location;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long location;
@property (readonly) Class superclass;

- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (unsigned long long)location;
- (bool)readFrom:(id)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setLocation:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
