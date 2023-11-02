
@interface HFStatusItemUpdate : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _currentValue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _iconDescriptor;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _possibleValues;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _secondaryText;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _title;
}

@property (nonatomic, retain) HFNumberRange *currentValue;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic, retain) HFNumberRange *possibleValues;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)currentValue;
- (id)description;
- (id)iconDescriptor;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 secondaryText:(id)arg2 iconDescriptor:(id)arg3;
- (id)possibleValues;
- (id)secondaryText;
- (void)setCurrentValue:(id)arg1;
- (void)setIconDescriptor:(id)arg1;
- (void)setPossibleValues:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
