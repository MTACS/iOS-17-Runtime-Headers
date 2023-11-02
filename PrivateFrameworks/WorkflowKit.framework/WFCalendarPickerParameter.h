
@interface WFCalendarPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource> {
    bool  _allowsAllCalendars;
    INObjectCollection * _calendarsCollection;
    id  _defaultSerializedCalendarRepresentation;
    bool  _hidesReadOnlyCalendars;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, readonly) bool allowsAllCalendars;
@property (nonatomic, retain) INObjectCollection *calendarsCollection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) id defaultSerializedCalendarRepresentation;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hidesReadOnlyCalendars;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allowsAllCalendars;
- (id)calendarsCollection;
- (void)clearPossibleStates;
- (id)defaultSerializedCalendarRepresentation;
- (id)enumeration:(id)arg1 accessoryColorForPossibleState:(id)arg2;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (bool)hidesReadOnlyCalendars;
- (id)initWithDefinition:(id)arg1;
- (void)loadDefaultSerializedRepresentationForEnumeration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)possibleStatesDidChange;
- (void)setCalendarsCollection:(id)arg1;
- (void)setDefaultSerializedCalendarRepresentation:(id)arg1;
- (Class)singleStateClass;
- (id)stateQueue;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end
