
@interface EDAMLazyMap : FATObject {
    NSDictionary * _fullMap;
    NSSet * _keysOnly;
}

@property (nonatomic, retain) NSDictionary *fullMap;
@property (nonatomic, retain) NSSet *keysOnly;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)fullMap;
- (id)keysOnly;
- (void)setFullMap:(id)arg1;
- (void)setKeysOnly:(id)arg1;

@end
