
@interface SXComponentBookmarkApplicator : NSObject <SXBookmarkApplicator> {
    <SXScrollPositionRestoring> * _scrollPositionRestoring;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXScrollPositionRestoring> *scrollPositionRestoring;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyBookmark:(id)arg1;
- (id)initWithScrollPositionRestoring:(id)arg1;
- (id)scrollPositionRestoring;

@end
