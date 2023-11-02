
@interface VideosUI.LibDownloadingEpisodesViewModel : VideosUI.LibViewModel {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _textViewModel;
    void cancellables;
    void seasons;
    void showEntity;
}

- (void)fetchShowDetails;

@end
