
@interface HREPresenceTriggerTemplate : HRETriggerTemplate {
    unsigned long long  _presenceType;
    unsigned long long  _presenceUserType;
}

@property (nonatomic) unsigned long long presenceType;
@property (nonatomic) unsigned long long presenceUserType;

- (id)_subclass_triggerBuilderForRecommendation:(id)arg1 withObjects:(id)arg2;
- (unsigned long long)presenceType;
- (unsigned long long)presenceUserType;
- (void)setPresenceType:(unsigned long long)arg1;
- (void)setPresenceUserType:(unsigned long long)arg1;

@end
