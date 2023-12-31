
@interface SKUICountdownComponent : SKUIPageComponent {
    SKUICountdown * _countdown;
}

@property (nonatomic, retain) SKUICountdown *countdown;

- (void).cxx_destruct;
- (long long)componentType;
- (id)countdown;
- (id)initWithCustomPageContext:(id)arg1;
- (void)setCountdown:(id)arg1;

@end
