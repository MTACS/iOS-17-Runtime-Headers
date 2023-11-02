
@interface FCLaunchPresentationConfig : NSObject {
    long long  _configVersion;
    NSArray * _presentationOperations;
}

@property (nonatomic) long long configVersion;
@property (nonatomic, retain) NSArray *presentationOperations;

- (void).cxx_destruct;
- (long long)configVersion;
- (id)initWithConfigDictionary:(id)arg1;
- (id)presentationOperations;
- (void)setConfigVersion:(long long)arg1;
- (void)setPresentationOperations:(id)arg1;

@end
