
@interface SiriAnalyticsTagShim : NSObject <NSSecureCoding> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void underlying;
}

@property (nonatomic, readonly) NSString *description;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConditionType:(int)arg1 componentId:(id)arg2 componentName:(int)arg3 joined:(bool)arg4;
- (id)initWithConditionType:(int)arg1 end:(unsigned long long)arg2;
- (id)initWithConditionType:(int)arg1 requestId:(id)arg2 joined:(bool)arg3;
- (id)initWithConditionType:(int)arg1 start:(unsigned long long)arg2;
- (id)initWithConditionType:(int)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3;
- (id)initWithConditionTypeAffectingEntireClock:(int)arg1;

@end
