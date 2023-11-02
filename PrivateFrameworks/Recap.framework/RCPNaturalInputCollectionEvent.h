
@interface RCPNaturalInputCollectionEvent : NSObject <NSCopying> {
    NSArray * _manipulators;
    long long  _phase;
    NSArray * _selections;
    RCPEventSenderProperties * _senderProperties;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSArray *manipulators;
@property (readonly) long long phase;
@property (readonly, copy) NSArray *selections;
@property (readonly) RCPEventSenderProperties *senderProperties;
@property (readonly) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithManipulators:(id)arg1 selections:(id)arg2 phase:(long long)arg3 timestamp:(unsigned long long)arg4 senderProperties:(id)arg5;
- (id)manipulators;
- (long long)phase;
- (id)selections;
- (id)senderProperties;
- (unsigned long long)timestamp;

@end
