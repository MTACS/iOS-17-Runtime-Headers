
@interface PAAccessRecordCoalescingDoneState : NSObject <PAAccessRecordCoalescingState> {
    NSArray * _groupedRecordsToRepublish;
    bool  _reversed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initByEndingLastWindow:(id)arg1 reversed:(bool)arg2;
- (id)recordsToRepublish;

@end
