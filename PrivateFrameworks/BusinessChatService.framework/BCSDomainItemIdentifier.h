
@interface BCSDomainItemIdentifier : NSObject <BCSDomainItemIdentifying, NSCopying> {
    NSString * _domain;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

+ (id)identifierWithType:(long long)arg1 domain:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)domain;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 domain:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
