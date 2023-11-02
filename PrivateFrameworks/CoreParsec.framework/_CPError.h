
@interface _CPError : PBCodable <NSSecureCoding, _CPError> {
    double  _code;
    NSString * _domain;
    NSString * _reason;
}

@property (nonatomic) double code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domain;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)code;
- (id)domain;
- (unsigned long long)hash;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reason;
- (void)setCode:(double)arg1;
- (void)setDomain:(id)arg1;
- (void)setReason:(id)arg1;
- (void)writeTo:(id)arg1;

@end
