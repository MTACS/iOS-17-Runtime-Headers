
@protocol FPDDomainIndexerDelegate <NSObject>

@required

- (void)extensionIndexer:(FPDDomainIndexer *)arg1 didChangeNeedsAuthentification:(bool)arg2;

@end
