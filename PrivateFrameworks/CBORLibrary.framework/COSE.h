
@interface COSE : NSObject {
    long long  _algorithmIdentifier;
    CBOR * _cborObj;
    NSData * _content;
    NSString * _contentType;
    NSArray * _criticalHeaderParameters;
    NSData * _initializationVector;
    NSData * _keyIdentifier;
    NSData * _partialInitializationVector;
    NSDictionary * _protectedHeadererDictionary;
    long long  _type;
}

@property (nonatomic, readonly) long long algorithmIdentifier;
@property (nonatomic, readonly) NSData *content;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSArray *criticalHeaderParameters;
@property (nonatomic, readonly) NSData *initializationVector;
@property (nonatomic, readonly) NSData *keyIdentifier;
@property (nonatomic, readonly) NSData *partialInitializationVector;
@property (nonatomic, readonly) NSData *protectedHeaderParameters;
@property (nonatomic, readonly) NSDictionary *protectedHeadererDictionary;
@property (nonatomic, readonly) CBOR *tag;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSDictionary *unprotectedHeaderParameters;

- (void).cxx_destruct;
- (long long)algorithmIdentifier;
- (id)content;
- (id)contentType;
- (id)criticalHeaderParameters;
- (id)initWithCBOR:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 type:(long long)arg2;
- (id)initializationVector;
- (id)keyIdentifier;
- (id)partialInitializationVector;
- (id)protectedHeaderParameters;
- (id)protectedHeadererDictionary;
- (id)tag;
- (long long)type;
- (id)unprotectedHeaderParameters;

@end
