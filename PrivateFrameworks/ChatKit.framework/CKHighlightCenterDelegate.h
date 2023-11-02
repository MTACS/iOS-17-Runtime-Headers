
@interface CKHighlightCenterDelegate : NSObject <SWHighlightCenterDelegate> {
    SWHighlightCenter * _highlightCenter;
    id /* block */  _performOnHighlightsDidChange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SWHighlightCenter *highlightCenter;
@property (nonatomic, copy) id /* block */ performOnHighlightsDidChange;
@property (readonly) Class superclass;

+ (bool)shouldAddCollaboration:(id)arg1 toFaceTimeConversation:(id)arg2 forIMChat:(id)arg3;

- (void).cxx_destruct;
- (id)highlightCenter;
- (void)highlightCenterHighlightsDidChange:(id)arg1;
- (id)initWithComposition:(id)arg1 faceTimeConversation:(id)arg2 imChat:(id)arg3 chatController:(id)arg4 backgroundTaskID:(unsigned long long)arg5;
- (id /* block */)performOnHighlightsDidChange;
- (void)setPerformOnHighlightsDidChange:(id /* block */)arg1;

@end
