
@interface SearchUICommandButtonItem : SFCommandButtonItem {
    SFButtonItem * _sfButtonItem;
    UIColor * _tintColor;
}

@property (nonatomic, retain) SFButtonItem *sfButtonItem;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithSFButtonItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSfButtonItem:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)sfButtonItem;
- (id)tintColor;

@end
