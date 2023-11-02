
@interface WFCalendarEventContentItemChangeTransaction : WFContentItemChangeTransaction {
    EKEventStore * _eventStore;
    EKEvent * _mutableEvent;
}

@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic, readonly) EKEvent *mutableEvent;

- (void).cxx_destruct;
- (void)addAttachments:(id)arg1;
- (id)eventStore;
- (id)initWithContentItem:(id)arg1 eventStore:(id)arg2;
- (id)mutableEvent;
- (void)removeAllAttachments;
- (void)saveWithCompletionHandler:(id /* block */)arg1 isNew:(bool)arg2;
- (void)updateAttachments:(id)arg1;

@end
