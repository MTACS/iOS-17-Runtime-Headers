
@interface DBIconManager : SBHIconManager {
    _DBIconListLayoutProvider * _layoutProvider;
}

@property (nonatomic, retain) _DBIconListLayoutProvider *layoutProvider;

- (void).cxx_destruct;
- (id)iconPageIndicatorImageSetCache;
- (id)initWithEnvironment:(id)arg1;
- (id)layoutProvider;
- (id)listLayoutProvider;
- (void)setLayoutProvider:(id)arg1;

@end
