
@interface CTStewieEmergencyNotifyOptionMessage : NSObject <CTStewieMessageOutgoing> {
    long long  _notifyOption;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long notifyOption;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotifyOption:(long long)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEmergencyUpdateNotifyOptionMessage:(id)arg1;
- (long long)notifyOption;
- (void)setNotifyOption:(long long)arg1;

@end
