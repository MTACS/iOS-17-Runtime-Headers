
@interface CLKComplicationTemplateBreathing : CLKComplicationTemplate {
    long long  _family;
    long long  _sessionCount;
}

@property (nonatomic) long long sessionCount;

+ (id)breathingTemplateWithFamily:(long long)arg1;

- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithFamily:(long long)arg1;
- (long long)sessionCount;
- (void)setSessionCount:(long long)arg1;

@end
