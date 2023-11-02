
@interface TUIEmojiSearchSource : NSObject {
    NSString * _autocorrectedQuery;
    <TUIEmojiSearchSourceDelegate> * _delegate;
    NSString * _exactQuery;
    NSLocale * _locale;
    EMFEmojiLocaleData * _localeData;
    NSArray * _multilingualSearchLocales;
    NSArray * _results;
    NSObject<OS_dispatch_queue> * _searchQueue;
}

@property (nonatomic) <TUIEmojiSearchSourceDelegate> *delegate;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) EMFEmojiLocaleData *localeData;
@property (nonatomic, retain) NSArray *multilingualSearchLocales;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) NSArray *suggestedEmojis;

- (void).cxx_destruct;
- (void)_deliverResults:(id)arg1 forExactQuery:(id)arg2 autocorrectedQuery:(id)arg3;
- (id)_emojiResultSetForExactQuery:(id)arg1 autocorrectedQuery:(id)arg2;
- (id)_filteredTokensIgnoringModifiers:(id)arg1;
- (id)_repeatSearchQuery:(id)arg1 forLocales:(id)arg2;
- (void)beginSearchForExactQuery:(id)arg1 autocorrectedQuery:(id)arg2;
- (id)delegate;
- (id)initWithLocale:(id)arg1;
- (id)languagesForMultilingualSearch;
- (id)locale;
- (id)localeData;
- (id)multilingualSearchLocales;
- (id)results;
- (void)setDelegate:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocaleData:(id)arg1;
- (void)setMultilingualSearchLocales:(id)arg1;
- (bool)shouldSupplyVerbatimResultsFor:(id)arg1;
- (id)suggestedEmojis;

@end
