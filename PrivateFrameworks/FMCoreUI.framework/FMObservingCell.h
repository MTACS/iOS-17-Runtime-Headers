
@interface FMObservingCell : UITableViewCell {
    NSMutableDictionary * _kvoObservationTokens;
    NSMutableSet * _notificationTokens;
    id  _representedObject;
}

@property (nonatomic, retain) NSMutableDictionary *kvoObservationTokens;
@property (nonatomic, retain) NSMutableSet *notificationTokens;
@property (nonatomic) id representedObject;

- (void).cxx_destruct;
- (void)addKVOObservationToken:(id)arg1 forObject:(id)arg2;
- (void)addNotificationToken:(id)arg1;
- (void)addObserversForRepresentedObject:(id)arg1;
- (id)kvoObservationTokens;
- (id)notificationTokens;
- (void)prepareForReuse;
- (void)removeKVOObservationTokens;
- (void)removeNotificationTokens;
- (id)representedObject;
- (void)setKvoObservationTokens:(id)arg1;
- (void)setNotificationTokens:(id)arg1;
- (void)setRepresentedObject:(id)arg1;

@end
