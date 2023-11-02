
@interface ASCAlertOffer : NSObject <ASCOffer, NSSecureCoding> {
    NSNumber * _ageRating;
    <ASCOffer> * _alertButtonOffer;
    NSString * _alertButtonTitle;
    NSString * _alertMessage;
    NSString * _alertTitle;
    long long  _flags;
    ASCAdamID * _id;
    NSArray * _metrics;
    NSDictionary * _subtitles;
    NSDictionary * _titles;
}

@property (nonatomic, readonly) NSNumber *ageRating;
@property (nonatomic, readonly, copy) <ASCOffer> *alertButtonOffer;
@property (nonatomic, readonly, copy) NSString *alertButtonTitle;
@property (nonatomic, readonly, copy) NSString *alertMessage;
@property (nonatomic, readonly, copy) NSString *alertTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) ASCAdamID *id;
@property (nonatomic, readonly) NSArray *metrics;
@property (nonatomic, readonly, copy) NSDictionary *subtitles;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDictionary *titles;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ageRating;
- (id)alertButtonOffer;
- (id)alertButtonTitle;
- (id)alertMessage;
- (id)alertTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)flags;
- (unsigned long long)hash;
- (id)id;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 alertTitle:(id)arg7 alertMessage:(id)arg8 alertButtonOffer:(id)arg9 alertButtonTitle:(id)arg10;
- (bool)isEqual:(id)arg1;
- (id)metrics;
- (id)offerWithMetrics:(id)arg1;
- (id)subtitles;
- (id)titles;

@end
