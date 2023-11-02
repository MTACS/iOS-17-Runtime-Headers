
@interface VideosUI.SportsPlayByPlayCollectionViewModel : VideosUI.CollectionViewModel {
    void cancellables;
    void numberOfPlays;
    void queue;
    void returningFromBackground;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sport;
    void sportsSpoilersEnabled;
}

- (void)willEnterForeground;

@end
