
@interface PXStoryStyleConfigurationList : NSObject {
    NSArray * _autoEditStyleConfigurations;
    PXStoryStyleConfiguration * _initialStyleConfiguration;
}

@property (nonatomic, readonly, copy) NSArray *autoEditStyleConfigurations;
@property (nonatomic, readonly) PXStoryStyleConfiguration *initialStyleConfiguration;

- (void).cxx_destruct;
- (id)autoEditStyleConfigurations;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAutoEditStyleConfigurations:(id)arg1 initialStyleConfiguration:(id)arg2;
- (id)initialStyleConfiguration;
- (bool)isEqual:(id)arg1;

@end
