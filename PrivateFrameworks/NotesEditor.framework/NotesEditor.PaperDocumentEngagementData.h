
@interface NotesEditor.PaperDocumentEngagementData : NSObject <ICPaperDocumentEngagementData> {
    void attachmentIdentifier;
    void endDisplayMode;
    void endPageCount;
    void hasActivity;
    void hasCollabEdit;
    void hasCollabView;
    void hasFullscreenStateUsage;
    void hasGestures;
    void hasLargeStateUsage;
    void hasMediumStateUsage;
    void hasPagination;
    void hasPinchToExpandState;
    void hasPinchZoom;
    void hasScroll;
    void hasSmallStateUsage;
    void largeState;
    void mediumState;
    void smallState;
    void startDisplayMode;
    void startPageCount;
    void unknownState;
}

@property (nonatomic, readonly) NSString *attachmentIdentifier;
@property (nonatomic) long long endPageCount;
@property (nonatomic, readonly) long long endState;
@property (nonatomic) bool hasActivity;
@property (nonatomic) bool hasCollabEdit;
@property (nonatomic) bool hasCollabView;
@property (nonatomic) bool hasFullscreenStateUsage;
@property (nonatomic) bool hasGestures;
@property (nonatomic) bool hasLargeStateUsage;
@property (nonatomic) bool hasMediumStateUsage;
@property (nonatomic) bool hasPagination;
@property (nonatomic) bool hasPinchToExpandState;
@property (nonatomic) bool hasPinchZoom;
@property (nonatomic) bool hasScroll;
@property (nonatomic) bool hasSmallStateUsage;
@property (nonatomic) long long startPageCount;
@property (nonatomic, readonly) long long startState;

- (void).cxx_destruct;
- (id)attachmentIdentifier;
- (long long)endPageCount;
- (long long)endState;
- (bool)hasActivity;
- (bool)hasCollabEdit;
- (bool)hasCollabView;
- (bool)hasFullscreenStateUsage;
- (bool)hasGestures;
- (bool)hasLargeStateUsage;
- (bool)hasMediumStateUsage;
- (bool)hasPagination;
- (bool)hasPinchToExpandState;
- (bool)hasPinchZoom;
- (bool)hasScroll;
- (bool)hasSmallStateUsage;
- (id)init;
- (void)reset;
- (void)setEndPageCount:(long long)arg1;
- (void)setHasActivity:(bool)arg1;
- (void)setHasCollabEdit:(bool)arg1;
- (void)setHasCollabView:(bool)arg1;
- (void)setHasFullscreenStateUsage:(bool)arg1;
- (void)setHasGestures:(bool)arg1;
- (void)setHasLargeStateUsage:(bool)arg1;
- (void)setHasMediumStateUsage:(bool)arg1;
- (void)setHasPagination:(bool)arg1;
- (void)setHasPinchToExpandState:(bool)arg1;
- (void)setHasPinchZoom:(bool)arg1;
- (void)setHasScroll:(bool)arg1;
- (void)setHasSmallStateUsage:(bool)arg1;
- (void)setStartPageCount:(long long)arg1;
- (long long)startPageCount;
- (long long)startState;

@end
