
@interface SBTemplateAndMorph : NSObject {
    SBPolygon * _morphedCandidate;
    SBTouchTemplate * _touchTemplate;
}

@property (nonatomic, readonly) SBPolygon *morphedCandidate;
@property (nonatomic, readonly) SBTouchTemplate *touchTemplate;

- (void).cxx_destruct;
- (id)initWithTemplate:(id)arg1 morph:(id)arg2;
- (id)morphedCandidate;
- (id)touchTemplate;

@end
