
@interface MCDomainsCacheEntry : NSObject {
    NSString * _domain;
    NSString * _path;
    NSNumber * _port;
    bool  _subdomainsMatch;
}

@property (nonatomic, retain) NSString *domain;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSNumber *port;
@property (nonatomic) bool subdomainsMatch;

+ (id)normalizedPatternString:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)domain;
- (id)initWithPattern:(id)arg1;
- (bool)matchesURL:(id)arg1;
- (id)path;
- (id)port;
- (void)setDomain:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPort:(id)arg1;
- (void)setSubdomainsMatch:(bool)arg1;
- (bool)subdomainsMatch;

@end
