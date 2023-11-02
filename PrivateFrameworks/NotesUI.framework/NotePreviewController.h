
@interface NotePreviewController : UIViewController <ICNotePreviewing, NoteContentLayerAttachmentPresentationDelegate, UITextViewDelegate> {
    NSArray * _attachmentPresentations;
    NoteContentLayer * _contentLayer;
    NoteObject * _note;
    ICSearchResult * _searchResult;
}

@property (nonatomic, retain) NSArray *attachmentPresentations;
@property (nonatomic, readonly) NotesBackgroundView *backgroundView;
@property (nonatomic, retain) NoteContentLayer *contentLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NoteObject *note;
@property (nonatomic, retain) ICSearchResult *searchResult;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)attachmentContentIDs;
- (id)attachmentPresentationForContentID:(id)arg1;
- (id)attachmentPresentations;
- (id)backgroundView;
- (id)contentLayer;
- (void)dealloc;
- (id)initWithNote:(id)arg1;
- (id)initWithNote:(id)arg1 searchResult:(id)arg2;
- (id)note;
- (id)noteContentLayer:(id)arg1 attachmentPresentationForContentID:(id)arg2;
- (id)noteContentLayer:(id)arg1 fileURLForAttachmentWithContentID:(id)arg2;
- (id)searchResult;
- (void)setAttachmentPresentations:(id)arg1;
- (void)setContentLayer:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setSearchResult:(id)arg1;
- (void)setupPreview;
- (void)setupPreviewWithInitialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForceLightContentIfNecessary;

@end
