
@interface SCWatchlistInlineDefaultsProvider : NSObject <SCWatchlistDefaultsProviding> {
    SCWatchlistDefaults * _defaults;
}

- (void).cxx_destruct;
- (void)fetchWatchlistDefaultsWithCompletion:(id /* block */)arg1;
- (id)initWithDefaults:(id)arg1;

@end
