
@interface WFTimeZonePickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource> {
    NSArray * _calendarStates;
    ALCityManager * _cityManager;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, retain) NSArray *calendarStates;
@property (nonatomic, retain) ALCityManager *cityManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)calendarStates;
- (id)cityManager;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)initWithDefinition:(id)arg1;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)preferParameterValuePicker;
- (void)setCalendarStates:(id)arg1;
- (void)setCityManager:(id)arg1;
- (Class)singleStateClass;
- (id)stateQueue;

@end
