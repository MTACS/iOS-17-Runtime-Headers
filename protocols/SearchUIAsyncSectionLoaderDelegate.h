
@protocol SearchUIAsyncSectionLoaderDelegate <NSObject>

@required

- (void)reloadSection:(SearchUISectionModel *)arg1 animated:(bool)arg2 reconfigureExisting:(bool)arg3;

@end
