
@interface SSContactEntitySectionBuilder : SSSectionBuilder {
    SSContactResultBuilder * _contactResultBuilder;
}

@property (nonatomic) SSContactResultBuilder *contactResultBuilder;

- (void).cxx_destruct;
- (id)contactResultBuilder;
- (void)setContactResultBuilder:(id)arg1;
- (bool)shouldSkipSection;

@end
