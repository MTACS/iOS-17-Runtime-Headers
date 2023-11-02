
@interface TransparencyApplication : NSObject {
    NSString * _applicationIdentifier;
}

@property (retain) NSString *applicationIdentifier;

+ (id)addApplicationPrefixForIdentifier:(id)arg1 uri:(id)arg2;
+ (id)applicationIdentifierForValue:(id)arg1;
+ (id)applicationPrefixForIdentifier:(id)arg1;
+ (id)applicationValueForIdentifier:(id)arg1;
+ (id)stripApplicationPrefixForIdentifier:(id)arg1 uri:(id)arg2;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)initWithIdentifier:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;

@end
