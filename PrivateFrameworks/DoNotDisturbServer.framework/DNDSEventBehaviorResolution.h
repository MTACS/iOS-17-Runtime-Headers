
@interface DNDSEventBehaviorResolution : NSObject <NSCopying> {
    NSUUID * _UUID;
    NSString * _clientIdentifier;
    NSDate * _date;
    DNDClientEventBehavior * _eventBehavior;
    unsigned long long  _outcome;
    unsigned long long  _reason;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) DNDClientEventBehavior *eventBehavior;
@property (nonatomic, readonly) unsigned long long outcome;
@property (nonatomic, readonly) unsigned long long reason;

+ (id)resolutionForDate:(id)arg1 eventBehavior:(id)arg2 clientIdentifier:(id)arg3 outcome:(unsigned long long)arg4 reason:(unsigned long long)arg5;

- (void).cxx_destruct;
- (id)UUID;
- (id)_descriptionForRedacted:(bool)arg1;
- (id)_initWithUUID:(id)arg1 date:(id)arg2 eventBehavior:(id)arg3 clientIdentifier:(id)arg4 outcome:(unsigned long long)arg5 reason:(unsigned long long)arg6;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)eventBehavior;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)outcome;
- (unsigned long long)reason;
- (id)redactedDescription;

@end
