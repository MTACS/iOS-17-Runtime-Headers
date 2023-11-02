
@interface AKProximityMessageViewModel : NSObject {
    NSString * _detailedText;
    NSString * _primaryButtonTitle;
    NSString * _secondaryButtonTitle;
    NSString * _titleText;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *detailedText;
@property (nonatomic, copy) NSString *primaryButtonTitle;
@property (nonatomic, copy) NSString *secondaryButtonTitle;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)detailedText;
- (id)initWithType:(unsigned long long)arg1;
- (id)primaryButtonTitle;
- (id)secondaryButtonTitle;
- (void)setDetailedText:(id)arg1;
- (void)setPrimaryButtonTitle:(id)arg1;
- (void)setSecondaryButtonTitle:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleText;
- (unsigned long long)type;

@end
