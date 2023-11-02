
@interface SearchUIWatchListState : NSObject {
    bool  _isWatchListed;
    NSString * _watchListIdentifier;
}

@property (nonatomic) bool isWatchListed;
@property (nonatomic, retain) NSString *watchListIdentifier;

- (void).cxx_destruct;
- (id)initWithContainerResponse:(id)arg1;
- (id)initWithIdentifier:(id)arg1 watchListed:(bool)arg2;
- (id)initWithResponse:(id)arg1;
- (bool)isWatchListed;
- (void)setIsWatchListed:(bool)arg1;
- (void)setWatchListIdentifier:(id)arg1;
- (void)toggleStateWithCompletion:(id /* block */)arg1;
- (id)watchListIdentifier;

@end
