
@interface _TtCC8PaperKit26PaperDocumentThumbnailView17ThumbnailDelegate : NSObject <PPKPDFThumbnailContextMenuDelegate, PPKPDFThumbnailDataSourceDelegate> {
    void thumbnailView;
}

- (void).cxx_destruct;
- (void)didSelectPage;
- (void)handlePageOrderedCollectionDifference:(id)arg1;
- (id)init;
- (void)insertFileAtURL:(id)arg1 atIndex:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)menuElementsForPage:(id)arg1;
- (id)pasteActionForPage:(id)arg1;
- (void)registerFileRepresentationsForPage:(long long)arg1 toItemProvider:(id)arg2;

@end
