
@interface CLMiLoGenericEventResponse : NSObject <NSCopying, NSSecureCoding> {
    NSError * _error;
    unsigned long long  _eventType;
    NSString * _genericEventDescription;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly) NSString *genericEventDescription;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)eventType;
- (id)genericEventDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(unsigned long long)arg1 withDescription:(id)arg2 withError:(id)arg3;

@end
