
@interface SSRestrictionCondition : SSProtocolCondition {
    NSString * _restrictionName;
}

- (void)dealloc;
- (bool)evaluateWithContext:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
