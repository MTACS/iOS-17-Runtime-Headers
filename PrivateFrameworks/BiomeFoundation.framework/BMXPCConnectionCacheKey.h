
@interface BMXPCConnectionCacheKey : NSObject {
    unsigned long long  _domain;
    NSString * _useCase;
}

@property (nonatomic, readonly) unsigned long long domain;
@property (nonatomic, readonly) NSString *useCase;

- (void).cxx_destruct;
- (unsigned long long)domain;
- (unsigned long long)hash;
- (id)initWithDomain:(unsigned long long)arg1 useCase:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)useCase;

@end
