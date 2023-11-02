
@interface STIncludeWebsiteDataGroupSpecifierProvider : STRootGroupSpecifierProvider {
    PSSpecifier * _toggleIncludeWebsiteDataSpecifier;
}

@property (nonatomic, retain) PSSpecifier *toggleIncludeWebsiteDataSpecifier;

- (void).cxx_destruct;
- (id)includeWebsiteData:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setCoordinator:(id)arg1;
- (void)setIncludeWebsiteData:(id)arg1 specifier:(id)arg2;
- (void)setToggleIncludeWebsiteDataSpecifier:(id)arg1;
- (id)toggleIncludeWebsiteDataSpecifier;

@end
