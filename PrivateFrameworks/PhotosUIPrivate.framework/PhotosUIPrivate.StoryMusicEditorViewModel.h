
@interface PhotosUIPrivate.StoryMusicEditorViewModel : NSObject {
    void $__lazy_storage_$_flexMusicCollectionsLoadingQueue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _selectedSong;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _songCollections;
    void actionPerformerDelegate;
    void cancelHandler;
    void cloudCapabilityObservation;
    void configuration;
    void selectionHandler;
    void songCollectionLoadedCompletionHandler;
    void songCollectionLoadingState;
    void storyModel;
    void storyViewModel;
}

- (void).cxx_destruct;
- (id)init;

@end
