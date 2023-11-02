
@interface PLCloudChangeHubClient : NSObject {
    unsigned char  _nodeUUID;
    NSUUID * _uuid;
}

@property (readonly, copy) NSUUID *uuid;

- (void).cxx_destruct;
- (id)fetchPendingEventsSinceIndex:(unsigned long long)arg1;
- (id)fetchResultsSinceIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithUUID:(id)arg1;
- (id)resultsFromReply:(id)arg1 sinceIndex:(unsigned long long)arg2;
- (id)successfulResultWithEvents:(id)arg1 changeHubEventIndex:(unsigned long long)arg2;
- (id)unsuccesfulResultWithWithType:(long long)arg1;
- (id)uuid;

@end
