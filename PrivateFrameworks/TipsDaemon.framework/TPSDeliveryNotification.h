
@interface TPSDeliveryNotification : TPSSerializableObject <NSCopying> {
    bool  _overrideOptOut;
    TPSDeliveryPrecondition * _precondition;
    bool  _suppress;
}

@property (nonatomic) bool overrideOptOut;
@property (nonatomic, retain) TPSDeliveryPrecondition *precondition;
@property (nonatomic) bool suppress;

+ (id)notificationFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)initWithDictionary:(id)arg1;
- (bool)overrideOptOut;
- (id)precondition;
- (void)setOverrideOptOut:(bool)arg1;
- (void)setPrecondition:(id)arg1;
- (void)setSuppress:(bool)arg1;
- (bool)suppress;

@end
