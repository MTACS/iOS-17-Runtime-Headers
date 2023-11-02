
@interface SGPseudoReminderKey : NSObject <SGEntityKey> {
    NSString * _groupId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *groupId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isSupportedEntityType:(long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)groupId;
- (unsigned long long)hash;
- (id)initWithGroupId:(id)arg1;
- (id)initWithSerialized:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPseudoReminderKey:(id)arg1;
- (id)serialize;

@end
