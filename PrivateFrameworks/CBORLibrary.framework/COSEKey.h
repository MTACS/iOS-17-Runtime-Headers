
@interface COSEKey : NSObject {
    long long  _algorithm;
    NSData * _baseInitializationVector;
    CBOR * _cborObj;
    NSNumber * _curveID;
    NSData * _identifier;
    NSArray * _operations;
    NSData * _paramD;
    NSData * _paramX;
    NSData * _paramY;
    NSData * _symmetricKey;
    long long  _type;
}

@property (nonatomic, readonly) long long algorithm;
@property (nonatomic, readonly) NSData *baseInitializationVector;
@property (nonatomic, readonly) NSData *ecCurveD;
@property (nonatomic, readonly) NSNumber *ecCurveIdentifier;
@property (nonatomic, readonly) NSData *ecCurveX;
@property (nonatomic, readonly) NSData *ecCurveY;
@property (nonatomic, readonly) NSData *identifier;
@property (nonatomic, readonly) NSData *okpCurveD;
@property (nonatomic, readonly) NSNumber *okpCurveIdentifier;
@property (nonatomic, readonly) NSData *okpCurveX;
@property (nonatomic, readonly) NSArray *operations;
@property (nonatomic, readonly) NSData *symmetricKey;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (long long)algorithm;
- (id)baseInitializationVector;
- (id)ecCurveD;
- (id)ecCurveIdentifier;
- (id)ecCurveX;
- (id)ecCurveY;
- (id)identifier;
- (id)initEC2WithAlgorithm:(long long)arg1 curveIdentifier:(long long)arg2 x:(id)arg3 signBit:(bool)arg4 d:(id)arg5 keyOperations:(id)arg6 keyIdentifier:(id)arg7;
- (id)initEC2WithAlgorithm:(long long)arg1 curveIdentifier:(long long)arg2 x:(id)arg3 y:(id)arg4 d:(id)arg5 keyOperations:(id)arg6 keyIdentifier:(id)arg7;
- (id)initOKPWithAlgorithm:(long long)arg1 curveIdentifier:(long long)arg2 x:(id)arg3 d:(id)arg4 keyOperations:(id)arg5 keyIdentifier:(id)arg6;
- (id)initWithCBOR:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)okpCurveD;
- (id)okpCurveIdentifier;
- (id)okpCurveX;
- (id)operations;
- (id)symmetricKey;
- (long long)type;

@end
