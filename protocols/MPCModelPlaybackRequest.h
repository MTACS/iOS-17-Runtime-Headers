
@protocol MPCModelPlaybackRequest <NSObject>

@optional

- (bool)disableImplicitSectioning;
- (void)setDisableImplicitSectioning:(bool)arg1;
- (void)setShouldBatchResultsWithPlaceholderObjects:(bool)arg1;
- (bool)shouldBatchResultsWithPlaceholderObjects;

@end
