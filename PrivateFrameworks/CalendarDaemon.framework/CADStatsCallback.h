
@interface CADStatsCallback : CADStatCollector {
    id /* block */  _callback;
    NSString * _eventName;
}

- (void).cxx_destruct;
- (id)eventDictionaries;
- (id)eventName;
- (id)initWithEventName:(id)arg1 callback:(id /* block */)arg2;

@end
