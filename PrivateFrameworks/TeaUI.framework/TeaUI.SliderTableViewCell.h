
@interface TeaUI.SliderTableViewCell : UITableViewCell {
    void label;
    void onChange;
    void precision;
    void slider;
    void valueLabel;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)valueChanged;

@end
