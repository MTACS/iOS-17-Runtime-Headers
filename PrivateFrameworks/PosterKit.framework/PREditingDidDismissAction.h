
@interface PREditingDidDismissAction : BSAction {
    NSArray * _graphicComplications;
    PRSWidget * _inlineComplication;
}

@property (nonatomic, readonly) NSArray *graphicComplications;
@property (nonatomic, readonly) PRSWidget *inlineComplication;
@property (nonatomic, readonly) bool userAcceptedChanges;

+ (id)acceptChangesWithCompletion:(id /* block */)arg1;
+ (id)cancelAction;

- (void).cxx_destruct;
- (id)_initWithCompletion:(id /* block */)arg1;
- (id)graphicComplications;
- (id)inlineComplication;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)sendResponseWithUpdatedConfiguration:(id)arg1 updatedProperties:(id)arg2;
- (bool)userAcceptedChanges;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
