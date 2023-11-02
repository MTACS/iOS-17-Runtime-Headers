
@interface ICQPremiumButton : UIButton {
    ICQLink * _link;
}

@property (nonatomic, retain) ICQLink *link;

+ (id)buttonWithType:(long long)arg1 link:(id)arg2;

- (void).cxx_destruct;
- (id)link;
- (void)setLink:(id)arg1;

@end
