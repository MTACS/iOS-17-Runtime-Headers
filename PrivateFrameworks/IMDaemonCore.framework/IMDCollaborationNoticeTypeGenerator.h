
@interface IMDCollaborationNoticeTypeGenerator : NSObject {
    SWHighlightCenter * _highlightCenter;
}

@property (nonatomic, readonly) SWHighlightCenter *highlightCenter;

+ (id)sharedGenerator;

- (void).cxx_destruct;
- (id)highlightCenter;
- (id)init;
- (long long)processMentionForPersonHandle:(id)arg1;
- (long long)processMentionForPersonIdentity:(id)arg1 highlightURL:(id)arg2;
- (long long)typeForHighlightEvent:(id)arg1;

@end
