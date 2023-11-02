
@interface MKFCKEventTrigger : MKFCKTrigger

@property (nonatomic, retain) NSSet *accessories;
@property (nonatomic, retain) NSPredicate *condition;
@property (nonatomic, retain) NSArray *events;
@property (nonatomic) long long recurrencesInt;
@property (nonatomic, retain) NSSet *users;

+ (id)fetchRequest;

- (id)_decodeEventDictionary:(id)arg1 localModel:(id)arg2 context:(id)arg3;
- (id)_encodeEvent:(id)arg1 accessories:(id)arg2 users:(id)arg3 shouldRemoveEvent:(bool*)arg4 context:(id)arg5;
- (bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;

@end
