
@interface MUAmenityListSectionConfiguration : NSObject {
    MUAmenityApplePayConfiguration * _applePayConfiguration;
    unsigned long long  _numberInlineAmenities;
    NSArray * _viewModels;
}

@property (nonatomic, retain) MUAmenityApplePayConfiguration *applePayConfiguration;
@property (nonatomic) unsigned long long numberInlineAmenities;
@property (nonatomic, copy) NSArray *viewModels;

- (void).cxx_destruct;
- (id)applePayConfiguration;
- (unsigned long long)numberInlineAmenities;
- (void)setApplePayConfiguration:(id)arg1;
- (void)setNumberInlineAmenities:(unsigned long long)arg1;
- (void)setViewModels:(id)arg1;
- (id)viewModels;

@end
