
@interface PAAccessRecordAccumulator : NSObject {
    NSMutableDictionary * _ongoingIntervals;
    <PAAccessRecord> * _record;
    NSMutableSet * _seenEvents;
}

@property (nonatomic, readonly) NSMutableDictionary *ongoingIntervals;
@property (nonatomic, retain) <PAAccessRecord> *record;
@property (nonatomic, readonly) NSMutableSet *seenEvents;

- (void).cxx_destruct;
- (id)init;
- (id)ongoingIntervals;
- (id)record;
- (id)seenEvents;
- (void)setRecord:(id)arg1;

@end
