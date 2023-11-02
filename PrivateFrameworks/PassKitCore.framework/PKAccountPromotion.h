
@interface PKAccountPromotion : NSObject <NSCopying, NSSecureCoding, PKIdentifiable> {
    NSArray * _completionSteps;
    NSDate * _endDate;
    long long  _impressionCount;
    PKDynamicTemplateLayout * _layout;
    NSDictionary * _layoutDictionary;
    NSString * _name;
    NSString * _programIdentifier;
    NSDate * _startDate;
    unsigned long long  _state;
    NSString * _templateIdentifier;
    NSURL * _termsURL;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSArray *completionSteps;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic) long long impressionCount;
@property (nonatomic, readonly) bool isInTerminalState;
@property (nonatomic, retain) PKDynamicTemplateLayout *layout;
@property (nonatomic, retain) NSDictionary *layoutDictionary;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *programIdentifier;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *templateIdentifier;
@property (nonatomic, retain) NSURL *termsURL;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_completed;
- (bool)_endDateHasPassed;
- (bool)_hasNonZeroProgress;
- (void)_initWithPromotionDictionary:(id)arg1;
- (bool)_isOngoing;
- (void)_parseLayoutDictionary;
- (bool)_startDateHasPassed;
- (void)_updateState;
- (id)completionSteps;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (bool)expiringSoon;
- (unsigned long long)hash;
- (id)identifier;
- (long long)impressionCount;
- (void)incrementImpressionCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccountPromotion:(id)arg1;
- (bool)isInTerminalState;
- (id)layout;
- (id)layoutData;
- (id)layoutDictionary;
- (id)name;
- (id)programIdentifier;
- (void)resetImpressionCount;
- (void)setCompletionSteps:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setImpressionCount:(long long)arg1;
- (void)setLayout:(id)arg1;
- (void)setLayoutDictionary:(id)arg1;
- (void)setLayoutDictionaryFromData:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProgramIdentifier:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTemplateIdentifier:(id)arg1;
- (void)setTermsURL:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)startDate;
- (unsigned long long)state;
- (id)templateIdentifier;
- (id)termsURL;
- (double)timeRemaining;
- (unsigned long long)type;

@end
