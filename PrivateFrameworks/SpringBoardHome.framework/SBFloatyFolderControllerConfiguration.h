
@interface SBFloatyFolderControllerConfiguration : SBFolderControllerConfiguration {
    unsigned long long  _backgroundEffect;
}

@property (nonatomic) unsigned long long backgroundEffect;

- (unsigned long long)backgroundEffect;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)setBackgroundEffect:(unsigned long long)arg1;

@end
