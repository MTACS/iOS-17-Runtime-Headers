
@interface _GCKeyboardEventImpl : NSObject <_GCKeyboardEvent> {
    long long  _down;
    unsigned long long  _sender;
    unsigned long long  _timestamp;
    long long  _usage;
    long long  _usagePage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long down;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long sender;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long usage;
@property (nonatomic) long long usagePage;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)down;
- (id)init;
- (id)initWithKeyboardEvent:(id)arg1;
- (id)initWithTimestamp:(unsigned long long)arg1 usagePage:(long long)arg2 usage:(long long)arg3 down:(long long)arg4 sender:(unsigned long long)arg5;
- (unsigned long long)sender;
- (void)setDown:(long long)arg1;
- (void)setSender:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUsage:(long long)arg1;
- (void)setUsagePage:(long long)arg1;
- (unsigned long long)timestamp;
- (long long)usage;
- (long long)usagePage;

@end
