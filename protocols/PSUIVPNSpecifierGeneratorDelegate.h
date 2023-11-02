
@protocol PSUIVPNSpecifierGeneratorDelegate

@required

- (void)vpnSpecifierGenerator:(PSUIVPNSpecifierGenerator *)arg1 lazyLoadBundleFromSpecifier:(PSSpecifier *)arg2;
- (void)vpnSpecifierGeneratorDidUpdate:(PSUIVPNSpecifierGenerator *)arg1;

@end
