
@interface BWStillImageConditionalRouterUBConfiguration : BWStillImageConditionalRouterConfiguration {
    NSArray * _portTypes;
}

@property (nonatomic, readonly) NSArray *portTypes;

+ (id)configurationWithPortTypes:(id)arg1;

- (void)dealloc;
- (unsigned long long)outputIndexForPortType:(id)arg1;
- (id)portTypes;

@end
