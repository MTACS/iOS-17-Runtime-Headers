
@interface SYBacklinkMonitorOperation : NSObject {
    SYShowBacklinkIndicatorCommand * __indicatorCommand;
    long long  __operationState;
    <SYBacklinkMonitorOperationDelegate_Testing> * __testingDelegate;
    NSArray * __testingForcedFoundDomainIdentifiers;
    NSArray * __testingForcedFoundLinkedIdentifiers;
    <SYBacklinkMonitorOperationDelegate> * _delegate;
    <SYUserActivityInfo> * _inputUserActivityInfo;
    int  _processIdentifier;
    NSObject<OS_dispatch_queue> * _processingQueue;
}

@property (nonatomic, retain) SYShowBacklinkIndicatorCommand *_indicatorCommand;
@property (nonatomic, readonly) long long _operationState;
@property (setter=_setOperationState:, nonatomic) long long _operationState;
@property (nonatomic, readonly) <SYBacklinkMonitorOperationDelegate_Testing> *_testingDelegate;
@property (nonatomic, retain) NSArray *_testingForcedFoundDomainIdentifiers;
@property (nonatomic, retain) NSArray *_testingForcedFoundLinkedIdentifiers;
@property (nonatomic, readonly) <SYBacklinkMonitorOperationDelegate> *delegate;
@property (nonatomic, retain) <SYUserActivityInfo> *inputUserActivityInfo;
@property (nonatomic, readonly) <SYUserActivityInfo> *inputUserActivityInfo;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (void)_finishProcessingAndNotify;
- (id)_indicatorCommand;
- (long long)_operationState;
- (void)_searchBacklinksForInputUserActivity;
- (void)_setOperationState:(long long)arg1;
- (void)_showOrHideBacklinkIndicatorForDomainIdentifiers:(id)arg1 linkedIdentifiers:(id)arg2;
- (id)_testingDelegate;
- (id)_testingForcedFoundDomainIdentifiers;
- (id)_testingForcedFoundLinkedIdentifiers;
- (void)beginProcessing;
- (id)delegate;
- (id)description;
- (id)initWithDelegate:(id)arg1 processingQueue:(id)arg2 inputUserActivityInfo:(id)arg3 processIdentifier:(int)arg4;
- (id)inputUserActivityInfo;
- (int)processIdentifier;
- (id)processingQueue;
- (void)setInputUserActivityInfo:(id)arg1;
- (void)set_indicatorCommand:(id)arg1;
- (void)set_testingForcedFoundDomainIdentifiers:(id)arg1;
- (void)set_testingForcedFoundLinkedIdentifiers:(id)arg1;
- (long long)type;

@end
