
@interface CKVideoCancelActionMenuItem : CKActionMenuItem {
    unsigned long long  _touchDownCount;
}

@property (nonatomic) unsigned long long touchDownCount;

- (void)setTouchDownCount:(unsigned long long)arg1;
- (unsigned long long)touchDownCount;
- (void)updateForState:(long long)arg1 touchInside:(bool)arg2;

@end
