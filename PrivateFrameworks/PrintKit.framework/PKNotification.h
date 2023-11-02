
@interface PKNotification : NSObject {
    NSString * _alternateButtonTitle;
    NSString * _defaultButtonTitle;
    NSDate * _endTime;
    NSString * _headerString;
    int  _kind;
    NSString * _messageString;
    PKNotifier * _notifier;
    id /* block */  _resultHandler;
    NSObject<OS_dispatch_queue> * _resultQueue;
    NSDate * _startTime;
}

@property (retain) NSString *alternateButtonTitle;
@property (retain) NSString *defaultButtonTitle;
@property (readonly) NSDate *endTime;
@property (retain) NSString *headerString;
@property (readonly) int kind;
@property (retain) NSString *messageString;
@property (readonly) PKNotifier *notifier;
@property (copy) id /* block */ resultHandler;
@property NSObject<OS_dispatch_queue> *resultQueue;
@property (readonly) NSDate *startTime;

- (void).cxx_destruct;
- (void)_interpretResult:(unsigned long long)arg1 responseDict:(id)arg2;
- (id)_makeDict;
- (unsigned long long)_makeFlags;
- (id)alternateButtonTitle;
- (void)cancel;
- (id)defaultButtonTitle;
- (id)endTime;
- (id)headerString;
- (id)initWithNotifier:(id)arg1 notifyKind:(int)arg2;
- (int)kind;
- (id)messageString;
- (id)notifier;
- (id /* block */)resultHandler;
- (id)resultQueue;
- (void)setAlternateButtonTitle:(id)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)setHeaderString:(id)arg1;
- (void)setMessageString:(id)arg1;
- (void)setResultHandler:(id /* block */)arg1;
- (void)setResultQueue:(id)arg1;
- (void)start;
- (id)startTime;

@end
