
@protocol ICPaperDocumentEngagementData <NSObject>

@required

- (NSString *)attachmentIdentifier;
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
- (long long)startPageCount;
- (long long)startState;

@end
