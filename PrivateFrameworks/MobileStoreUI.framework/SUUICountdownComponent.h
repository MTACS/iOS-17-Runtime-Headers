
@interface SUUICountdownComponent : SUUIPageComponent {
    SUUICountdown * _countdown;
}

@property (nonatomic, retain) SUUICountdown *countdown;

- (void).cxx_destruct;
- (long long)componentType;
- (id)countdown;
- (id)initWithCustomPageContext:(id)arg1;
- (void)setCountdown:(id)arg1;

@end
