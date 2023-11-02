
@interface CHVisualizationManager : NSObject <CHRecognitionSessionObserver, CHStrokeGroupBasedVisualizationDelegate> {
    NSMutableArray * __activeVisualizationIDs;
    NSMutableDictionary * __activeVisualizationsByID;
    NSMutableSet * __enabledVisualizationIDs;
    bool  __registeredAsChangeObserver;
    bool  __registeredAsInputDrawingsClient;
    NSMutableDictionary * __strokeGroupIndexByAncestorID;
    <CHVisualizationManagerDelegate> * _delegate;
    CHRecognitionSession * _recognitionSession;
    bool  _statusReportingEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CHVisualizationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CHRecognitionSession *recognitionSession;
@property (nonatomic) bool statusReportingEnabled;
@property (readonly) Class superclass;

+ (id)availableRecognitionSessionStatusKeys;
+ (id)availableVisualizationIdentifiers;
+ (id)localizedNameForRecognitionSessionStatusKey:(id)arg1;
+ (id)localizedNameForVisualizationIdentifier:(id)arg1;
+ (struct CGColor { }*)newColorForVisualizedItemAtIndex:(long long)arg1;
+ (bool)variableHeightForRecognitionSessionStatusKey:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 viewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)init;
- (id)initWithRecognitionSession:(id)arg1;
- (bool)isEnabledVisualizationForIdentifier:(id)arg1;
- (id)recognitionSession;
- (void)recognitionSessionDidChangeStatus:(id)arg1;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1 forVisualizationIdentifier:(id)arg2;
- (void)setStatusReportingEnabled:(bool)arg1;
- (bool)statusReportingEnabled;
- (void)toggleSelectiveVisualizationsAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)valueForRecognitionStatusKey:(id)arg1;
- (void)visualization:(id)arg1 needsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)visualizationIndexForStrokeGroup:(id)arg1;
- (void)visualizationNeedsDisplay:(id)arg1;

@end
