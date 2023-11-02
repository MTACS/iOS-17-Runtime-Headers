
@interface IMSWHighlightCenterController : NSObject <SWHighlightCenterDelegate> {
    SWHighlightCenter * _highlightCenter;
    IMSyndicationUtilities * _utilities;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SWHighlightCenter *highlightCenter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) IMSyndicationUtilities *utilities;

+ (id)sharedController;
+ (id)sharedControllerWithAppIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)collaborationHighlightForURL:(id)arg1 error:(id*)arg2;
- (id)fetchAttributionsForHighlight:(id)arg1;
- (void)fetchAttributionsForHighlight:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)highlightCenter;
- (void)highlightCenterHighlightsDidChange:(id)arg1;
- (id)init;
- (id)initWithAppIdentifier:(id)arg1;
- (id)utilities;

@end
