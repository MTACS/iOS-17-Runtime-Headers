
@interface CMSExtensionIntentEndpointConfiguration : CMSExtensionEndpointConfiguration {
    NSMutableSet * _optionalMethods;
}

@property (nonatomic, retain) NSMutableSet *optionalMethods;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1 endpoint:(id)arg2 baseURL:(id)arg3 groupHeaders:(id)arg4;
- (id)optionalMethods;
- (void)setOptionalMethods:(id)arg1;

@end
