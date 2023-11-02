
@interface SBHomeHardwareButtonGestureRecognizerConfiguration : NSObject {
    UIHBClickGestureRecognizer * _acceleratedSinglePressUpGestureRecognizer;
    UIHBClickGestureRecognizer * _doublePressDownGestureRecognizer;
    UIHBClickGestureRecognizer * _doublePressUpGestureRecognizer;
    UIHBClickGestureRecognizer * _doubleTapUpGestureRecognizer;
    UIHBClickGestureRecognizer * _initialButtonDownGestureRecognizer;
    UIHBClickGestureRecognizer * _initialButtonUpGestureRecognizer;
    UIHBLongClickGestureRecognizer * _longPressGestureRecognizer;
    UIHBClickGestureRecognizer * _singlePressUpGestureRecognizer;
    SBSystemGestureManager * _systemGestureManager;
    UIHBClickGestureRecognizer * _triplePressUpGestureRecognizer;
}

@property (nonatomic, retain) UIHBClickGestureRecognizer *acceleratedSinglePressUpGestureRecognizer;
@property (nonatomic, readonly) NSArray *allGestureRecognizers;
@property (nonatomic, retain) UIHBClickGestureRecognizer *doublePressDownGestureRecognizer;
@property (nonatomic, retain) UIHBClickGestureRecognizer *doublePressUpGestureRecognizer;
@property (nonatomic, retain) UIHBClickGestureRecognizer *doubleTapUpGestureRecognizer;
@property (nonatomic, retain) UIHBClickGestureRecognizer *initialButtonDownGestureRecognizer;
@property (nonatomic, retain) UIHBClickGestureRecognizer *initialButtonUpGestureRecognizer;
@property (nonatomic, retain) UIHBLongClickGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, readonly) bool shouldConfigureDependencies;
@property (nonatomic, retain) UIHBClickGestureRecognizer *singlePressUpGestureRecognizer;
@property (nonatomic, retain) SBSystemGestureManager *systemGestureManager;
@property (nonatomic, retain) UIHBClickGestureRecognizer *triplePressUpGestureRecognizer;

- (void).cxx_destruct;
- (id)acceleratedSinglePressUpGestureRecognizer;
- (id)allGestureRecognizers;
- (id)doublePressDownGestureRecognizer;
- (id)doublePressUpGestureRecognizer;
- (id)doubleTapUpGestureRecognizer;
- (id)initialButtonDownGestureRecognizer;
- (id)initialButtonUpGestureRecognizer;
- (id)longPressGestureRecognizer;
- (void)setAcceleratedSinglePressUpGestureRecognizer:(id)arg1;
- (void)setDoublePressDownGestureRecognizer:(id)arg1;
- (void)setDoublePressUpGestureRecognizer:(id)arg1;
- (void)setDoubleTapUpGestureRecognizer:(id)arg1;
- (void)setInitialButtonDownGestureRecognizer:(id)arg1;
- (void)setInitialButtonUpGestureRecognizer:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setSinglePressUpGestureRecognizer:(id)arg1;
- (void)setSystemGestureManager:(id)arg1;
- (void)setTriplePressUpGestureRecognizer:(id)arg1;
- (bool)shouldConfigureDependencies;
- (id)singlePressUpGestureRecognizer;
- (id)systemGestureManager;
- (id)triplePressUpGestureRecognizer;

@end
