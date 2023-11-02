
@interface HMELastEventStore : NSObject <HMEEventPersistence> {
    struct sqlite3 { } * _db;
    NSString * _fileName;
    NSString * _integrityCheckError;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _logger;
    NSString * _readJournalMode;
    bool  _useWal;
    struct sqlite3_stmt { } * deleteBeforeTimestampPreparedStatement;
    struct sqlite3_stmt { } * deleteEventByKeyLikePreparedStatement;
    struct sqlite3_stmt { } * deleteEventByKeyPreparedStatement;
    struct sqlite3_stmt { } * insertEventPreparedStatement;
    struct sqlite3_stmt { } * replaceEventIfMoreRecentOrDifferentSourcePreparedStatement;
    struct sqlite3_stmt { } * selectEventByKeyPreparedStatement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *fileName;
@property (readonly) unsigned long long hash;
@property (retain) NSString *integrityCheckError;
@property (retain) NSString *readJournalMode;
@property (readonly) Class superclass;
@property (readonly) bool useWal;

- (void).cxx_destruct;
- (void)dealloc;
- (id)eventsForTopicFilters:(id)arg1;
- (id)eventsForTopicFilters:(id)arg1 sinceReferenceTimestamp:(double)arg2;
- (id)fileName;
- (id)initInMemoryStore;
- (id)initWithFileName:(id)arg1;
- (id)initWithFileName:(id)arg1 useWal:(bool)arg2;
- (id)integrityCheckError;
- (id)lastEventForTopic:(id)arg1;
- (id)readJournalMode;
- (void)resetBeforeReferenceTimestamp:(double)arg1;
- (void)resetEventStore;
- (void)resetTopic:(id)arg1;
- (void)resetWildcardTopics:(id)arg1;
- (void)setIntegrityCheckError:(id)arg1;
- (void)setReadJournalMode:(id)arg1;
- (bool)startup;
- (bool)useWal;
- (void)writer:(id)arg1 saveEvent:(id)arg2 topic:(id)arg3;
- (bool)writer:(id)arg1 saveEventIfAllowed:(id)arg2 topic:(id)arg3;
- (bool)writer:(id)arg1 saveEventIfDifferent:(id)arg2 topic:(id)arg3;

@end
