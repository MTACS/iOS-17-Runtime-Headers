
@interface GEOTransitPaymentMethodSuggestion : NSObject <NSCopying> {
    GEOPBTransitPaymentMethodSuggestion * _suggestion;
    NSArray * educationalScreenAssets;
    NSArray * educationalScreenPaymentBody;
    GEOFormattedString * educationalScreenTitle;
    unsigned long long  marketMUID;
    NSArray * paymentMethodIndices;
    int  purpose;
    GEOFormattedString * tipSubtitle;
    GEOFormattedString * tipTitle;
    int  type;
}

@property (nonatomic, readonly) NSArray *educationalScreenAssets;
@property (nonatomic, readonly) NSArray *educationalScreenPaymentBody;
@property (nonatomic, readonly) GEOFormattedString *educationalScreenTitle;
@property (nonatomic, readonly) unsigned long long marketMUID;
@property (nonatomic, readonly) NSArray *paymentMethodIndices;
@property (nonatomic, readonly) int purpose;
@property (nonatomic, readonly) GEOFormattedString *tipSubtitle;
@property (nonatomic, readonly) GEOFormattedString *tipTitle;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)educationalScreenAssets;
- (id)educationalScreenPaymentBody;
- (id)educationalScreenTitle;
- (id)initWithSuggestionData:(id)arg1;
- (unsigned long long)marketMUID;
- (id)paymentMethodIndices;
- (int)purpose;
- (id)tipSubtitle;
- (id)tipTitle;
- (int)type;

@end
