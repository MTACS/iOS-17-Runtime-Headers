
@interface CSEvent : NSObject {
    bool  _consumable;
    bool  _stateless;
    long long  _type;
    NSNumber * _value;
}

@property (getter=isConsumable, nonatomic) bool consumable;
@property (getter=isStateless, nonatomic) bool stateless;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSNumber *value;

+ (id)eventWithType:(long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)isConsumable;
- (bool)isStateless;
- (void)setConsumable:(bool)arg1;
- (void)setStateless:(bool)arg1;
- (void)setType:(long long)arg1;
- (void)setValue:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)type;
- (id)value;

@end
