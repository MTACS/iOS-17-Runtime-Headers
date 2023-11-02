
@interface HDPendingNotificationInstructions : NSObject <NSCopying> {
    long long  _action;
    NSSet * _instructions;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly, copy) NSSet *categoryIdentifiers;
@property (nonatomic, readonly, copy) NSSet *instructions;
@property (nonatomic, readonly, copy) NSSet *messageIdentifiers;

- (void).cxx_destruct;
- (long long)action;
- (id)categoryIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAction:(long long)arg1 instructions:(id)arg2;
- (id)instructions;
- (bool)isEqual:(id)arg1;
- (id)messageIdentifiers;

@end
