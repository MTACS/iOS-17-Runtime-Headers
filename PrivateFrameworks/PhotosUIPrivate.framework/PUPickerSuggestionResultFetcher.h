
@interface PUPickerSuggestionResultFetcher : NSObject <PHPhotoLibraryChangeObserver> {
    void photoLibrary;
    void updateHandler;
    void workQueue;
    void workQueue_currentSuggestion;
    void workQueue_result;
    void workQueue_wallpaperSuggestionCache;
}

@property (nonatomic, retain) <PUPickerSuggestion> *currentSuggestion;

- (void).cxx_destruct;
- (id)currentSuggestion;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1 updateHandler:(id /* block */)arg2;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setCurrentSuggestion:(id)arg1;

@end
