
@interface PXScoreLabViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITextFieldDelegate, _PXScoreLabGraphViewDelegate> {
    NSArray * _assetFilterNames;
    UIPickerView * _assetFilterPickerView;
    NSDictionary * _assetPredicateByFilterName;
    UIPickerView * _graphTypePickerView;
    _PXScoreLabGraphView * _graphView;
    NSDictionary * _keyPathByScoreName;
    PXRoundProgressView * _progressView;
    bool  _redrawIsDisabled;
    NSDictionary * _sceneIdentifierBySceneName;
    NSArray * _scoreNames;
    NSDictionary * _timestampKeyPathByPrefix;
    UIPickerView * _xScorePickerView;
    UITextField * _xScoreSceneNameField;
    UIPickerView * _yScorePickerView;
    UITextField * _yScoreSceneNameField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned int)identifierForSceneName:(id)arg1;
- (id)init;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)redrawGraph;
- (void)sceneNameChanged:(id)arg1;
- (void)scoreLabGraphView:(id)arg1 reloadProgressed:(double)arg2;
- (void)scoreLabGraphViewDidFinishReloading:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id /* block */)valueGetterForSceneIdentifier:(unsigned int)arg1;
- (id /* block */)valueGetterForScoreKeyPath:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
