
@interface HFUserNotificationServiceTopicItemProvider : HFItemProvider {
    id /* block */  _filter;
    HMHome * _home;
    NSSet * _topicItems;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, copy) NSSet *topicItems;

- (void).cxx_destruct;
- (id /* block */)filter;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setTopicItems:(id)arg1;
- (id)topicItems;

@end
