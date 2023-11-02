
@interface BKSTerminationContext : NSObject <NSCopying> {
    long long  _exceptionCode;
    NSString * _explanation;
}

@property (nonatomic) long long exceptionCode;
@property (nonatomic, copy) NSString *explanation;

+ (id)context;
+ (id)terminationAssertionContext;

- (void).cxx_destruct;
- (bool)_isEqualToTerminationContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)exceptionCode;
- (id)explanation;
- (bool)isEqual:(id)arg1;
- (void)setExceptionCode:(long long)arg1;
- (void)setExplanation:(id)arg1;

@end
