
@interface AVTToolbarButton : UIButton {
    bool  _isDefault;
    NSString * _title;
}

@property (nonatomic, readonly) bool isDefault;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 isDefault:(bool)arg2;
- (bool)isDefault;
- (id)title;

@end
