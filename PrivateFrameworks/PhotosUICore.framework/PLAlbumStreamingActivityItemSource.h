
@interface PLAlbumStreamingActivityItemSource : NSObject <UIActivityItemSocialSource, UIActivityItemSubjectSource, UIActivityItemsSource> {
    PLCloudSharedAlbum * _album;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewControllerSubject:(id)arg1;
- (id)initWithAlbum:(id)arg1;

@end
