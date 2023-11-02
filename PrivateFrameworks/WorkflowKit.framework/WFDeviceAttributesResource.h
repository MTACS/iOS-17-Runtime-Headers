
@interface WFDeviceAttributesResource : WFResource {
    NSArray * _requiredCapabilities;
    NSArray * _requiredDeviceIdioms;
}

@property (nonatomic, readonly) NSArray *requiredCapabilities;
@property (nonatomic, readonly) NSArray *requiredDeviceIdioms;

+ (bool)mustBeAvailableForDisplay;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)arg1;
- (void)refreshAvailability;
- (id)requiredCapabilities;
- (id)requiredDeviceIdioms;

@end
