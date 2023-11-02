
@interface WDAtrialFibrillationDetectionSetupTableViewCell : UITableViewCell {
    WDAtrialFibrillationDetectionSetupView * _setupView;
}

@property (nonatomic, readonly) WDAtrialFibrillationDetectionSetupView *setupView;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)setupView;

@end
