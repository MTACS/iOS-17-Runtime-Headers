
@interface HKObjectPickerDetailItem : NSObject {
    NSString * _primaryText;
    NSString * _secondaryText;
}

@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, copy) NSString *secondaryText;

- (void).cxx_destruct;
- (id)initWithPrimaryText:(id)arg1 secondaryText:(id)arg2;
- (id)primaryText;
- (id)secondaryText;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;

@end
