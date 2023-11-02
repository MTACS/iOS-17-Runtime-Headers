
@protocol MUPlaceEnrichmentSectionContextMenuDelegate <NSObject>

@required

- (void)addContextMenuUsingBoundingBox:(NSDictionary *)arg1 accessibilityLabel:(NSString *)arg2;
- (void)didLayoutContextMenu:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MUPlaceEnrichmentAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
