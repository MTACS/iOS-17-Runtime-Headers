
@interface SPRMonitorLog : NSObject <NSSecureCoding> {
    NSString * _component;
    NSData * _details;
    NSString * _event;
    long long  _logType;
    NSString * _origin;
}

@property (copy) NSString *component;
@property (copy) NSData *details;
@property (copy) NSString *event;
@property (readonly) long long logType;
@property (copy) NSString *origin;

+ (id)getEventString:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)component;
- (id)description;
- (id)details;
- (void)encodeWithCoder:(id)arg1;
- (id)event;
- (id)initWithAudit:(id)arg1 details:(id)arg2 origin:(id)arg3 component:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(long long)arg1 details:(id)arg2 origin:(id)arg3 component:(id)arg4;
- (id)initWithIncident:(id)arg1 details:(id)arg2 origin:(id)arg3 component:(id)arg4;
- (long long)logType;
- (id)origin;
- (void)setComponent:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setOrigin:(id)arg1;

@end
