
@interface AMUIInfographListLayoutProvider : NSObject <SBIconListLayoutProvider> {
    unsigned long long  _screenType;
}

@property (nonatomic, readonly) unsigned long long screenType;

- (void)configureRootFolderConfiguration:(id)arg1 screenType:(unsigned long long)arg2;
- (id)init;
- (id)initWithScreenType:(unsigned long long)arg1;
- (id)layoutForIconLocation:(id)arg1;
- (unsigned long long)screenType;

@end
