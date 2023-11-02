
@interface FCKeyedOperation : NSObject <FCOperationCanceling> {
    <FCOperationCanceling> * _cancelHandler;
    bool  _cancelled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;

@end
