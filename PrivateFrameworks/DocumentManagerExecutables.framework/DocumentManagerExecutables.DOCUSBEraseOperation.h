
@interface DocumentManagerExecutables.DOCUSBEraseOperation : NSObject {
    void completionHandler;
    void isFinished;
    void newDisplayName;
    void operationState;
    void source;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long operationState;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (long long)operationState;
- (void)setOperationState:(long long)arg1;

@end
