
@protocol TLPreviewTimelineEntry <TLTimelineEntry>

@required

- (NSArray *)tl_errors;
- (NSArray *)tl_selectableRegions;

@end
