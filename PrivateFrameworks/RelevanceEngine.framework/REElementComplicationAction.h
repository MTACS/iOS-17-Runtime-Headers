
@interface REElementComplicationAction : REElementAction {
    NSString * _slotIdentifier;
}

@property (nonatomic, readonly) NSString *slotIdentifier;

- (void).cxx_destruct;
- (void)_performWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSlotIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)slotIdentifier;

@end
