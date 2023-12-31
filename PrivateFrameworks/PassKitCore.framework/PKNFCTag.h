
@interface PKNFCTag : NSObject {
    NSData * _UID;
    NSData * _manufacturerIdentifier;
    NSData * _manufacturerParameter;
    NSData * _systemCode;
    NSData * _tagIdentifier;
    unsigned long long  _technology;
    NFTag * _underlyingTag;
}

@property (nonatomic, copy) NSData *UID;
@property (nonatomic, copy) NSData *manufacturerIdentifier;
@property (nonatomic, copy) NSData *manufacturerParameter;
@property (nonatomic, copy) NSData *systemCode;
@property (nonatomic, copy) NSData *tagIdentifier;
@property (nonatomic) unsigned long long technology;

- (void).cxx_destruct;
- (id)UID;
- (id)initWithNFTag:(id)arg1;
- (id)manufacturerIdentifier;
- (id)manufacturerParameter;
- (void)setManufacturerIdentifier:(id)arg1;
- (void)setManufacturerParameter:(id)arg1;
- (void)setSystemCode:(id)arg1;
- (void)setTagIdentifier:(id)arg1;
- (void)setTechnology:(unsigned long long)arg1;
- (void)setUID:(id)arg1;
- (id)systemCode;
- (id)tagIdentifier;
- (unsigned long long)technology;

@end
