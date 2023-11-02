
@interface _TVApplicationInspector : NSObject <_TVInspectorCapturingViewDelegate> {
    TVApplicationController * _applicationController;
    _TVInspectorCapturingView * _capturingView;
    NSHashTable * _highlightViews;
    bool  _inspectionModeEnabled;
}

@property (nonatomic, readonly) TVApplicationController *applicationController;
@property (nonatomic, readonly) _TVInspectorCapturingView *capturingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *highlightViews;
@property (getter=isInspectionModeEnabled, nonatomic) bool inspectionModeEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_highlightViewForElement:(id)arg1 contentColor:(id)arg2 borderColor:(id)arg3;
- (id)applicationController;
- (void)cancelHighlight;
- (id)capturingView;
- (void)capturingView:(id)arg1 didCaptureTapOnView:(id)arg2;
- (void)highlightViewElements:(id)arg1 contentColor:(id)arg2 borderColor:(id)arg3;
- (id)highlightViews;
- (id)initWithApplicationController:(id)arg1;
- (bool)isInspectionModeEnabled;
- (id)rootView;
- (void)setInspectionModeEnabled:(bool)arg1;

@end
