
@interface FBKURLExtension : NSObject {
    NSString * _extensionIdentifier;
    NSString * _name;
    NSDictionary * _parameters;
}

@property (nonatomic, retain) NSString *extensionIdentifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDictionary *parameters;

- (void).cxx_destruct;
- (id)extensionIdentifier;
- (unsigned long long)hash;
- (id)initWithExtensionIdentifier:(id)arg1 parameters:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)parameters;
- (void)setExtensionIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParameters:(id)arg1;

@end
