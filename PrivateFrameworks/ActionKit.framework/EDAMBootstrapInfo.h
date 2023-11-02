
@interface EDAMBootstrapInfo : FATObject {
    NSArray * _profiles;
}

@property (nonatomic, retain) NSArray *profiles;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)profiles;
- (void)setProfiles:(id)arg1;

@end
