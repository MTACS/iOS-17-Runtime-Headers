
@interface SBHAddWidgetSheetAppCollectionViewCellConfigurator : NSObject {
    SBHIconImageCache * _iconImageCache;
    NSMutableDictionary * _nonAppIconImageCache;
}

@property (nonatomic, readonly) SBHIconImageCache *iconImageCache;

- (void).cxx_destruct;
- (void)configureCell:(id)arg1 withApplicationWidgetCollection:(id)arg2;
- (id)iconImageCache;
- (id)initWithIconCache:(id)arg1;

@end
