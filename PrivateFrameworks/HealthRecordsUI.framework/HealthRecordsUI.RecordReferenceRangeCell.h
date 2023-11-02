
@interface HealthRecordsUI.RecordReferenceRangeCell : UITableViewCell {
    void expandedRangeValueView;
    void valueInRange;
}

@property (nonatomic, retain) HKInspectableValueInRange *valueInRange;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setValueInRange:(id)arg1;
- (id)valueInRange;

@end
