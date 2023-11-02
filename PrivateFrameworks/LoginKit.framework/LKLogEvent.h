
@interface LKLogEvent : NSObject {
    unsigned long long  _activityIdentifier;
    NSString * _composedMessage;
    NSDate * _date;
    NSString * _process;
    NSString * _senderImagePath;
}

@property (nonatomic, readonly) unsigned long long activityIdentifier;
@property (nonatomic, readonly) NSString *composedMessage;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *process;
@property (nonatomic, readonly) NSString *senderImagePath;

- (void).cxx_destruct;
- (unsigned long long)activityIdentifier;
- (id)composedMessage;
- (bool)containsMessage:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)dictionary;
- (bool)loggedByFramework:(id)arg1;
- (bool)loggedByProcess:(id)arg1;
- (id)process;
- (id)senderImagePath;
- (void)setActivityIdentifier:(unsigned long long)arg1;
- (void)setComposedMessage:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setProcess:(id)arg1;
- (void)setSenderImagePath:(id)arg1;

@end
