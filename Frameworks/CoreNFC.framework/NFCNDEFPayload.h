
@interface NFCNDEFPayload : NSObject <NSSecureCoding> {
    unsigned long long  _chunkSize;
    NSData * _identifier;
    NSData * _payload;
    NSData * _type;
    unsigned char  _typeNameFormat;
}

@property (nonatomic, copy) NSData *identifier;
@property (nonatomic, copy) NSData *payload;
@property (nonatomic, copy) NSData *type;
@property (nonatomic) unsigned char typeNameFormat;

+ (bool)supportsSecureCoding;
+ (id)wellKnowTypeTextPayloadWithString:(id)arg1 locale:(id)arg2;
+ (id)wellKnownTypeTextPayloadWithString:(id)arg1 locale:(id)arg2;
+ (id)wellKnownTypeURIPayloadWithString:(id)arg1;
+ (id)wellKnownTypeURIPayloadWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)asData;
- (unsigned long long)chunkSize;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormat:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4;
- (id)initWithFormat:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4 chunkSize:(unsigned long long)arg5;
- (id)initWithFormatType:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4 chunkSize:(unsigned long long)arg5;
- (id)payload;
- (id)resolveURIString:(id)arg1;
- (void)setChunkSize:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setType:(id)arg1;
- (void)setTypeNameFormat:(unsigned char)arg1;
- (id)type;
- (unsigned char)typeNameFormat;
- (id)wellKnownTypeTextPayloadWithLocale:(id*)arg1;
- (id)wellKnownTypeURIPayload;

@end
