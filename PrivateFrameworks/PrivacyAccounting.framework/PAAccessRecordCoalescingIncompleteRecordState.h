
@interface PAAccessRecordCoalescingIncompleteRecordState : NSObject <PAAccessRecordCoalescingState> {
    <PAAccessRecordCoalescingState> * _previousState;
    <PAAccessRecord> * _recordToRepublish;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PAAccessRecordCoalescingState> *previousState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPreviousState:(id)arg1 recordToRepublish:(id)arg2;
- (id)previousState;
- (id)recordsToRepublish;

@end
