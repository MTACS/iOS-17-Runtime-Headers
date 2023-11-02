
@interface SiriAnalyticsTag : NSObject <NSSecureCoding> {
    SiriAnalyticsTagShim * _shim;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConditionType:(int)arg1 componentId:(id)arg2 componentName:(int)arg3 joined:(bool)arg4;
- (id)initWithConditionType:(int)arg1 end:(unsigned long long)arg2;
- (id)initWithConditionType:(int)arg1 requestId:(id)arg2 joined:(bool)arg3;
- (id)initWithConditionType:(int)arg1 start:(unsigned long long)arg2;
- (id)initWithConditionType:(int)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3;
- (id)initWithConditionTypeAffectingEntireClock:(int)arg1;
- (id)shim;

@end
