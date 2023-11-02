
@interface GKSupportedTransport : GKInternalRepresentation {
    NSString * _name;
    long long  _version;
}

@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic) long long version;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithVersionNumber:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end
