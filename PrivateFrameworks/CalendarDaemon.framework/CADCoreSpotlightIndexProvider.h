
@interface CADCoreSpotlightIndexProvider : NSObject <CADSpotlightIndexProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)newSpotlightIndexForBundleID:(id)arg1;

@end