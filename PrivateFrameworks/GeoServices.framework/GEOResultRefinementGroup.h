
@interface GEOResultRefinementGroup : NSObject {
    GEOPDRefinementSessionState * _refinementSessionState;
    GEOResultRefinementBar * _resultRefinementBar;
    GEOResultRefinementView * _resultRefinementView;
}

@property (nonatomic, retain) GEOPDRefinementSessionState *refinementSessionState;
@property (nonatomic, retain) GEOResultRefinementBar *resultRefinementBar;
@property (nonatomic, retain) GEOResultRefinementView *resultRefinementView;

- (void).cxx_destruct;
- (id)initWithResultRefinementBar:(id)arg1 resultRefinementView:(id)arg2 refinementSessionState:(id)arg3;
- (id)initWithResultRefinementGroup:(id)arg1;
- (id)refinementSessionState;
- (id)resultRefinementBar;
- (id)resultRefinementView;
- (void)setRefinementSessionState:(id)arg1;
- (void)setResultRefinementBar:(id)arg1;
- (void)setResultRefinementView:(id)arg1;

@end
