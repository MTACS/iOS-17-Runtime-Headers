
@interface PPTemporalClusterStorage : NSObject {
    PPLocalContactStore * _contactStore;
    PPLocalNamedEntityStore * _entityStore;
    PPLocalEventStore * _eventStore;
    PPLocalLocationStore * _locationStore;
    PPLocalTopicStore * _topicStore;
}

+ (id)defaultStorage;
+ (id)enrichEntities:(id)arg1 mediaRecords:(id)arg2;

- (void).cxx_destruct;
- (id)eventsWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)init;
- (id)initWithEventStore:(id)arg1 topicStore:(id)arg2 entityStore:(id)arg3 locationStore:(id)arg4 contactStore:(id)arg5;
- (id)rankedTemporalClusterForStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3;

@end
