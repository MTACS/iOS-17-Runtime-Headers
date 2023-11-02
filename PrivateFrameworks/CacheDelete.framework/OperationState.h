
@interface OperationState : NSObject {
    bool  _operationCancelled;
    int  _operationRefcount;
    NSObject<OS_dispatch_queue> * _queue;
}

@property bool operationCancelled;
@property int operationRefcount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (bool)begin;
- (void)cancel;
- (bool)cancelled;
- (void)end;
- (id)init;
- (bool)operationCancelled;
- (int)operationRefcount;
- (id)queue;
- (void)setOperationCancelled:(bool)arg1;
- (void)setOperationRefcount:(int)arg1;
- (void)setQueue:(id)arg1;

@end
