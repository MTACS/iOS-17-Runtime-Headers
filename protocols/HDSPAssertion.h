
@protocol HDSPAssertion <NSObject>

@required

+ (id)assertionWithIdentifier:(NSString *)arg1;
+ (id)assertionWithIdentifier:(NSString *)arg1 timeout:(double)arg2;
+ (id)new;

- (NSString *)identifier;
- (id)init;
- (void)releaseAssertion;

@end
