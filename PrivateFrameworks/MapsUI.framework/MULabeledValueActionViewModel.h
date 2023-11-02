
@interface MULabeledValueActionViewModel : NSObject <MUDynamicButtonCellModel, MULabeledValueActionViewModelProviding> {
    id /* block */  _actionBlock;
    long long  _actionVariant;
    NSString * _alternativeTitleString;
    int  _analyticAction;
    int  _analyticsTarget;
    bool  _emphasizeValueString;
    NSString * _symbolName;
    NSString * _titleString;
    NSString * _valueString;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic, readonly) long long actionStyle;
@property (nonatomic) long long actionVariant;
@property (nonatomic, retain) NSString *alternativeTitleString;
@property (nonatomic, readonly) int analyticAction;
@property (nonatomic) int analyticsTarget;
@property (nonatomic) <MUDynamicButtonCellModelChangeDelegate> *changeDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool emphasizeValueString;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIMenu *menu;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, retain) NSString *symbolName;
@property (nonatomic, retain) NSString *titleString;
@property (nonatomic, readonly) NSString *titleString;
@property (nonatomic, retain) NSString *valueString;

+ (id)messageItemWithMapItem:(id)arg1;

- (void).cxx_destruct;
- (id)accessibilityIdentifierForAction;
- (id /* block */)actionBlock;
- (long long)actionStyle;
- (long long)actionVariant;
- (id)alternativeTitleString;
- (int)analyticAction;
- (int)analyticsTarget;
- (bool)emphasizeValueString;
- (bool)isEnabled;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setActionVariant:(long long)arg1;
- (void)setAlternativeTitleString:(id)arg1;
- (void)setAnalyticsTarget:(int)arg1;
- (void)setEmphasizeValueString:(bool)arg1;
- (void)setSymbolName:(id)arg1;
- (void)setTitleString:(id)arg1;
- (void)setValueString:(id)arg1;
- (id)symbolName;
- (id)titleString;
- (id)valueString;

@end
