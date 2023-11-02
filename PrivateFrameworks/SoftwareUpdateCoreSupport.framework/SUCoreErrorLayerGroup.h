
@interface SUCoreErrorLayerGroup : NSObject {
    NSString * _domain;
    long long  _errorLayer;
    long long  _indications;
    NSString * _keyMatchTrue;
    NSDictionary * _keyMatchTrueMap;
    long long  _maxCode;
    long long  _minCode;
}

@property (nonatomic, readonly, retain) NSString *domain;
@property (nonatomic, readonly) long long errorLayer;
@property (nonatomic) long long indications;
@property (nonatomic, retain) NSString *keyMatchTrue;
@property (nonatomic, retain) NSDictionary *keyMatchTrueMap;
@property (nonatomic, readonly) long long maxCode;
@property (nonatomic, readonly) long long minCode;

- (void).cxx_destruct;
- (id)description;
- (id)domain;
- (long long)errorLayer;
- (long long)indications;
- (id)initForLayer:(long long)arg1 withDomain:(id)arg2;
- (id)initForLayer:(long long)arg1 withDomain:(id)arg2 minCode:(long long)arg3 maxCode:(long long)arg4;
- (id)initForLayer:(long long)arg1 withDomain:(id)arg2 minCode:(long long)arg3 maxCode:(long long)arg4 indicating:(long long)arg5 ifKeyTrue:(id)arg6 keyMatchTrueMap:(id)arg7;
- (id)keyMatchTrue;
- (id)keyMatchTrueMap;
- (long long)maxCode;
- (long long)minCode;
- (void)setIndications:(long long)arg1;
- (void)setKeyMatchTrue:(id)arg1;
- (void)setKeyMatchTrueMap:(id)arg1;
- (id)summary;

@end
