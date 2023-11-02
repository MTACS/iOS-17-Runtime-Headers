
@interface ICAttachmentPaperBundleModel : ICAttachmentModel {
    ICAccount * _account;
}

@property (nonatomic, readonly) ICAccount *account;
@property (nonatomic, readonly) NSURL *paperBundleAssetsSubdirectoryURL;
@property (nonatomic, readonly) NSURL *paperBundleDatabaseSubdirectoryURL;
@property (nonatomic, readonly) NSURL *paperBundleURL;
@property (nonatomic, readonly) NSURL *paperCoherenceContextURL;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (void)generateFallbackPDFDataForAttachment:(id)arg1 completion:(id /* block */)arg2;
+ (id)paperBundleURLForAttachmentIdentifier:(id)arg1 inAccount:(id)arg2;

- (void).cxx_destruct;
- (id)account;
- (id)archivePaperBundleToDiskWithError:(id*)arg1;
- (id)fallbackPDFData;
- (bool)hasPreviews;
- (id)paperBundleAssetsSubdirectoryURL;
- (id)paperBundleDatabaseSubdirectoryURL;
- (id)paperBundleURL;
- (id)paperCoherenceContextURL;
- (bool)providesStandaloneTitleForNote;
- (bool)restorePaperBundleFromArchiveURL:(id)arg1 error:(id*)arg2;
- (bool)showThumbnailInNoteList;
- (id)standaloneTitleForNote;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (bool)fallbackPDFGenerationEnabled;
+ (bool)generateImagePreviewsForAttachment:(id)arg1 withFallbackPDFData:(id)arg2;

- (id)activityItem;
- (id)activityItems;
- (void)drawPreviewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)generateFallbackPDFIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)generateFallbackPDFWithCompletion:(id /* block */)arg1;
- (bool)generatePreviewsDuringCloudActivity;
- (bool)generatePreviewsInOperation:(id)arg1;
- (bool)needToGeneratePreviews;

@end
