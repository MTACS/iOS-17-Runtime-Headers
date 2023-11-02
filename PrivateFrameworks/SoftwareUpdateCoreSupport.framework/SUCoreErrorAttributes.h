
@interface SUCoreErrorAttributes : NSObject {
    long long  _code;
    NSString * _codeName;
    NSString * _domain;
    long long  _indications;
    NSString * _keyMatchTrue;
    NSDictionary * _keyMatchTrueMap;
}

@property (nonatomic, readonly) long long code;
@property (nonatomic, readonly, retain) NSString *codeName;
@property (nonatomic, readonly, retain) NSString *domain;
@property (nonatomic) long long indications;
@property (nonatomic, retain) NSString *keyMatchTrue;
@property (nonatomic, retain) NSDictionary *keyMatchTrueMap;

+ (id)descriptionForIndication:(long long)arg1;
+ (id)nameForIndication:(long long)arg1;

- (void).cxx_destruct;
- (long long)code;
- (id)codeName;
- (id)description;
- (id)domain;
- (long long)indications;
- (id)initForDomain:(id)arg1 withCode:(long long)arg2 ofCodeName:(id)arg3 indicating:(long long)arg4 ifKeyTrue:(id)arg5 keyMatchTrueMap:(id)arg6;
- (id)keyMatchTrue;
- (id)keyMatchTrueMap;
- (void)setIndications:(long long)arg1;
- (void)setKeyMatchTrue:(id)arg1;
- (void)setKeyMatchTrueMap:(id)arg1;

@end
