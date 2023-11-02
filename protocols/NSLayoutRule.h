
@protocol NSLayoutRule <NSObject, NSCopying>

@required

- (NSString *)identifier;
- (NSArray *)makeChildRules;
- (NSString *)ruleDescription;

@end
