
@interface CADFullLoggingSpotlightIndexProvider : NSObject <CADSpotlightIndexProvider> {
    <CADSpotlightIndexProvider> * _wrappedProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithProvider:(id)arg1;
- (id)newSpotlightIndexForBundleID:(id)arg1;

@end
