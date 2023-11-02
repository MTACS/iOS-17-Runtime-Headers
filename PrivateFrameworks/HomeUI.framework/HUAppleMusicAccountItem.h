
@interface HUAppleMusicAccountItem : HUAppleMusicItem {
    ACAccount * _account;
}

@property (nonatomic, readonly) ACAccount *account;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)account;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1 account:(id)arg2;

@end
