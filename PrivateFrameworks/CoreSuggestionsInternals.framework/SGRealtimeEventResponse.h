
@interface SGRealtimeEventResponse : NSObject {
    SGCuratedEventKey * _duplicateEventKey;
    SGEntity * _entity;
    int  _state;
    NSString * _templateShortName;
}

@property (nonatomic, readonly) SGCuratedEventKey *duplicateEventKey;
@property (nonatomic, readonly) SGEntity *entity;
@property (nonatomic, readonly) int state;
@property (nonatomic, readonly) NSString *templateShortName;

- (void).cxx_destruct;
- (id)duplicateEventKey;
- (id)entity;
- (id)initCancellationOfCuratedEvent:(id)arg1 templateShortName:(id)arg2 entity:(id)arg3;
- (id)initDuplicateOfCuratedEvent:(id)arg1 withEntity:(id)arg2;
- (id)initExtractionExceptionWithEntity:(id)arg1;
- (id)initNewEventWithEntity:(id)arg1;
- (id)initUpdatedEventWithEntity:(id)arg1 curatedEventKey:(id)arg2;
- (id)initWithEntity:(id)arg1 state:(int)arg2 duplicateEventKey:(id)arg3 templateShortName:(id)arg4;
- (int)state;
- (id)templateShortName;

@end
