
@interface HAPIssuerKey : NSObject <HAPTLVProtocol, NSCopying> {
    NSData * _key;
    HAPNFCAccessKeyTypeWrapper * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *key;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPNFCAccessKeyTypeWrapper *type;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithType:(id)arg1 key:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)key;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setKey:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
