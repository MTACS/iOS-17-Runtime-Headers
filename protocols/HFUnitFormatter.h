
@protocol HFUnitFormatter <NSObject>

@required

- (NSString *)stringForObjectValue:(id)arg1 withUnit:(bool)arg2;
- (NSString *)unitDescription;

@end
