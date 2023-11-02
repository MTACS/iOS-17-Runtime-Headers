
@interface APUIAppIconGridLayoutProvider : NSObject <SBIconListLayoutProvider> {
    unsigned long long  _mode;
}

@property (nonatomic) unsigned long long mode;

- (id)layoutForIconLocation:(id)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;

@end
