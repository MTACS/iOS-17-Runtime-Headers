
@interface AVRoutingConfiguration : NSObject {
    bool  _isDefault;
    NSString * _outputContextID;
    unsigned long long  _sharingPolicy;
}

@property (nonatomic, readonly) NSString *outputContextID;
@property (nonatomic, readonly) unsigned long long sharingPolicy;

+ (id)configurationWithOutputContextID:(id)arg1 sharingPolicy:(unsigned long long)arg2;
+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (bool)isDefault;
- (id)outputContextID;
- (unsigned long long)sharingPolicy;

@end
