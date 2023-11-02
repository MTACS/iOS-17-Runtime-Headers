
@interface WLKFeature : NSObject {
    NSString * _domain;
    bool  _enabled;
    NSString * _name;
}

@property (nonatomic, copy) NSString *domain;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (id)domain;
- (bool)enabled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFeature:(id)arg1;
- (id)jsonRepresentation;
- (id)name;
- (void)setDomain:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setName:(id)arg1;

@end
