
@interface CWFEvent : NSObject <NSCopying> {
    NSUUID * _UUID;
    id /* block */  _acknowledge;
    unsigned long long  _acknowledgementTimeout;
    CWFEventID * _eventID;
    NSDictionary * _info;
    NSDate * _timestamp;
}

@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic, copy) id /* block */ acknowledge;
@property (nonatomic) unsigned long long acknowledgementTimeout;
@property (nonatomic, copy) CWFEventID *eventID;
@property (nonatomic, copy) NSDictionary *info;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)JSONCompatibleKeyValueMap;
- (id)UUID;
- (id /* block */)acknowledge;
- (unsigned long long)acknowledgementTimeout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)eventID;
- (unsigned long long)hash;
- (id)info;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEvent:(id)arg1;
- (void)setAcknowledge:(id /* block */)arg1;
- (void)setAcknowledgementTimeout:(unsigned long long)arg1;
- (void)setEventID:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUUID:(id)arg1;
- (id)timestamp;
- (long long)type;

@end
