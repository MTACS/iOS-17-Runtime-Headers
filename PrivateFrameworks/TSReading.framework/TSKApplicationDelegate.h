
@interface TSKApplicationDelegate : NSObject <TSKApplicationDelegate> {
    <TSKCompatibilityDelegate> * _compatibilityDelegate;
}

@property (getter=isActivating, readonly) bool activating;
@property (nonatomic, readonly) NSString *applicationName;
@property (nonatomic, readonly) bool centerOnInitialSelection;
@property (nonatomic, retain) <TSKCompatibilityDelegate> *compatibilityDelegate;
@property (nonatomic, readonly) bool designModeEnabled;
@property (nonatomic, readonly) NSString *documentTypeDisplayName;
@property (getter=isInBackground, readonly) bool inBackground;
@property (nonatomic, readonly) bool isCanvasFullScreen;
@property (nonatomic, readonly) bool performanceModeEnabled;
@property (nonatomic, readonly) bool tableCellInspectorShowsNaturalAlignment;
@property (nonatomic, readonly) bool tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property (nonatomic, readonly) bool tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
@property (nonatomic, readonly) bool tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property (nonatomic, readonly) NSString *templateTypeDisplayName;
@property (nonatomic, readonly) bool textInspectorShowsMoreSubpane;

+ (id)documentDirectoryPath;
+ (bool)isUnitTesting;
+ (void)setSurrogateDelegate:(id)arg1;
+ (id)sharedDelegate;

- (id)appChartPropertyOverrides;
- (id)applicationName;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationToolbarFrame;
- (bool)centerOnInitialSelection;
- (id)compatibilityDelegate;
- (id)createCompatibilityDelegate;
- (void)dealloc;
- (id)defaultHyperlinkURL;
- (bool)designModeEnabled;
- (id)documentTypeDisplayName;
- (id)init;
- (id)invalidURLSchemes;
- (bool)isActivating;
- (bool)isCanvasFullScreen;
- (bool)isInBackground;
- (bool)openURL:(id)arg1;
- (bool)openURL:(id)arg1 sourceDocumentRoot:(id)arg2;
- (bool)performanceModeEnabled;
- (id)previewImageForType:(id)arg1;
- (void)setCompatibilityDelegate:(id)arg1;
- (bool)shouldGenerateGuidesForOffscreenLayouts;
- (bool)shouldRenderContactShadow;
- (bool)shouldRenderCurvedShadow;
- (bool)shouldValidateMasterLayoutWhileInsertingRows;
- (bool)supportsRTL;
- (bool)supportsScrollingInPhoneCommentUI;
- (bool)tableCellInspectorShowsNaturalAlignment;
- (bool)tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
- (bool)tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
- (bool)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
- (id)templateTypeDisplayName;
- (bool)textInspectorShowsMoreSubpane;
- (id)toolbarButtonForModalDoneWithTarget:(id)arg1 action:(SEL)arg2;
- (id)validURLSchemes;

@end
