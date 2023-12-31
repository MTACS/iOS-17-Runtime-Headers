
@interface CRKArrayDifferenceEngine : NSObject {
    <CRKArrayDifferenceConfiguration> * _configuration;
    NSString * mKeyPath;
    NSObject * mObject;
}

@property (nonatomic, retain) <CRKArrayDifferenceConfiguration> *configuration;

+ (id)configurationWithIncomingItemsIdentifierFunction:(id /* block */)arg1 publishedItemsIdentifierFunction:(id /* block */)arg2;
+ (id)identityConfiguration;

- (void).cxx_destruct;
- (id)configuration;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 configuration:(id)arg3;
- (void)setConfiguration:(id)arg1;
- (void)updateWithNewArray:(id)arg1;

@end
