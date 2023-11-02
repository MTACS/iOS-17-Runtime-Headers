
@interface WFTriggerEvent : WFDatabaseObjectDescriptor {
    bool  _confirmed;
    NSDate * _dateCreated;
    NSData * _eventInfo;
    NSString * _triggerID;
}

@property (nonatomic) bool confirmed;
@property (nonatomic, readonly) NSDate *dateCreated;
@property (nonatomic, readonly, copy) NSData *eventInfo;
@property (nonatomic, readonly, copy) NSString *triggerID;

- (void).cxx_destruct;
- (bool)confirmed;
- (id)dateCreated;
- (id)eventInfo;
- (id)initWithIdentifier:(id)arg1 triggerID:(id)arg2 eventInfo:(id)arg3 confirmed:(bool)arg4 dateCreated:(id)arg5;
- (void)setConfirmed:(bool)arg1;
- (id)triggerID;

@end
