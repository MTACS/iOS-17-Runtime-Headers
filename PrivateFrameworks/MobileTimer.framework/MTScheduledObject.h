
@interface MTScheduledObject : NSObject <NAEquatable, NSCopying> {
    <MTScheduleable> * _scheduleable;
    MTTrigger * _trigger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isVisible;
@property (nonatomic, copy) <MTScheduleable> *scheduleable;
@property (readonly) Class superclass;
@property (nonatomic, copy) MTTrigger *trigger;
@property (nonatomic, readonly) unsigned long long type;

+ (id)scheduledObjectForScheduleable:(id)arg1 trigger:(id)arg2;
+ (unsigned long long)scheduledTypeForTriggerType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithScheduleable:(id)arg1 trigger:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScheduledObject:(id)arg1;
- (bool)isVisible;
- (id)scheduleable;
- (void)setScheduleable:(id)arg1;
- (void)setTrigger:(id)arg1;
- (id)trigger;
- (unsigned long long)type;

@end
