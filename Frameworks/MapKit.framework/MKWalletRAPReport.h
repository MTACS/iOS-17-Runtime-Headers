
@interface MKWalletRAPReport : NSObject {
    GEORPFeedbackRequestParameters * _feedbackRequestParameters;
    GEORPProblem * _problem;
    GEORPFeedbackRequestParameters * _requestParameters;
}

@property (nonatomic, copy) NSString *correlationId;
@property (nonatomic) bool isAppleCard;
@property (nonatomic) unsigned long long lookupTransactionType;
@property (nonatomic, copy) NSString *merchantAdamId;
@property (nonatomic, readonly) GEORPProblem *problem;
@property (nonatomic, copy) NSString *reportersComment;
@property (nonatomic, readonly) GEORPFeedbackRequestParameters *requestParameters;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void).cxx_destruct;
- (id)correlationId;
- (id)initForMerchantIssue:(unsigned long long)arg1 merchantIndustryCode:(long long)arg2 mapsIdentifier:(unsigned long long)arg3 merchantName:(id)arg4 merchantRawName:(id)arg5 merchantIndustryCategory:(id)arg6 merchantURL:(id)arg7 merchantFormattedAddress:(id)arg8 transactionTime:(double)arg9 transactionType:(id)arg10 transactionLocation:(struct { double x1; double x2; })arg11;
- (bool)isAppleCard;
- (unsigned long long)lookupTransactionType;
- (id)merchantAdamId;
- (id)problem;
- (id)reportersComment;
- (id)requestParameters;
- (void)setCorrelationId:(id)arg1;
- (void)setIsAppleCard:(bool)arg1;
- (void)setLookupTransactionType:(unsigned long long)arg1;
- (void)setMerchantAdamId:(id)arg1;
- (void)setReportersComment:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)initForMerchantIssue:(unsigned long long)arg1 transaction:(id)arg2 account:(id)arg3 comments:(id)arg4;

@end
