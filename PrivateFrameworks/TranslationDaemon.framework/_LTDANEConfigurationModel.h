
@interface _LTDANEConfigurationModel : NSObject {
    NSDictionary * _capabilities;
    NSString * _config;
    NSDictionary * _root;
}

@property (nonatomic, retain) NSDictionary *capabilities;
@property (nonatomic, readonly) NSString *config;
@property (nonatomic, retain) NSDictionary *root;

- (void).cxx_destruct;
- (id)capabilities;
- (long long)capabilityForSubType:(id)arg1;
- (id)config;
- (id)debugDescription;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)root;
- (void)setCapabilities:(id)arg1;
- (void)setRoot:(id)arg1;
- (id)subTypes;

@end
