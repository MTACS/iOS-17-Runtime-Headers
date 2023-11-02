
@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor> {
    NSMutableArray * _messages;
    MFActivityMonitor * _monitor;
    id /* block */  _transmogrifier;
}

@property (nonatomic, copy) id /* block */ transmogrifier;

- (void).cxx_destruct;
- (id)copyMessages;
- (id)init;
- (id)messages;
- (void)newMessagesAvailable:(id)arg1;
- (void)setTransmogrifier:(id /* block */)arg1;
- (bool)shouldCancel;
- (id /* block */)transmogrifier;

@end
