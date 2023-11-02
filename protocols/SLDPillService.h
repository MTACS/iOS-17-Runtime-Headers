
@protocol SLDPillService

@required

- (void)accessibilityLabelForAttributionIdentifier:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)accessibilityLabelForAttributionIdentifiers:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)highlightDisambiguationPillForAttributionIdentifier:(void *)arg1 style:(void *)arg2 maxWidth:(void *)arg3 variant:(void *)arg4 layerContextID:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 11: NSString *, UISSlotStyle *, double, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UISSlotRemoteContent *, void*
- (void)highlightPillForAttributionIdentifiers:(void *)arg1 style:(void *)arg2 maxWidth:(void *)arg3 variant:(void *)arg4 layerContextID:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 11: NSArray *, UISSlotStyle *, double, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UISSlotRemoteContent *, void*

@end
