
@interface CNPropertyEmailAddressCell : CNPropertySimpleTransportCell {
    bool  _VIP;
}

@property (getter=isVIP, nonatomic) bool VIP;

- (bool)isVIP;
- (void)setVIP:(bool)arg1;
- (bool)shouldPerformDefaultAction;
- (bool)shouldShowStar;
- (void)updateTransportButtons;
- (void)updateValueWithPropertyItem:(id)arg1;

@end
