
@interface EDAMNotFoundException : FATException {
    NSString * _identifier;
    NSString * _key;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *key;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)identifier;
- (id)key;
- (void)setIdentifier:(id)arg1;
- (void)setKey:(id)arg1;

@end
