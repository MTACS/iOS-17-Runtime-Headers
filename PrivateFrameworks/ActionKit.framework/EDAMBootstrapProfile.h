
@interface EDAMBootstrapProfile : FATObject {
    NSString * _name;
    EDAMBootstrapSettings * _settings;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) EDAMBootstrapSettings *settings;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)name;
- (void)setName:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
