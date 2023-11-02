
@interface UIUserInterfaceStyleArbiterTransition : NSObject {
    long long  _hour;
    long long  _minute;
    long long  _type;
}

@property (nonatomic) long long hour;
@property (nonatomic) long long minute;
@property (nonatomic) long long type;

- (id)description;
- (long long)hour;
- (long long)minute;
- (void)setHour:(long long)arg1;
- (void)setMinute:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
