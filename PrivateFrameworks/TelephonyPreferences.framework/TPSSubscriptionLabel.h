
@interface TPSSubscriptionLabel : NSObject {
    NSString * _localizedBadgeLabel;
    NSString * _localizedLongLabel;
    NSString * _unlocalizedLongLabel;
}

@property (nonatomic, readonly) NSString *localizedBadgeLabel;
@property (nonatomic, readonly) NSString *localizedLongLabel;
@property (nonatomic, readonly) NSString *unlocalizedLongLabel;

+ (id)labelsFromUnlocalizedLabels:(id)arg1 localizedLongLabels:(id)arg2 localizedBadgeLabels:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithUnlocalizedLabel:(id)arg1 localizedLongLabel:(id)arg2 localizedBadgeLabel:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSubscriptionLabel:(id)arg1;
- (id)localizedBadgeLabel;
- (id)localizedLongLabel;
- (id)unlocalizedLongLabel;

@end
