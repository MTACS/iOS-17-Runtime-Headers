
@interface PSGInputSuggestionsResponse : NSObject <NSCopying, NSSecureCoding> {
    PSGInputSuggestionsExplanationSet * _explanationSet;
    NSArray * _responseItems;
    double  _servingTimeMillis;
    int  _triggeredItemsCount;
    double  _triggeringTimeMillis;
}

@property (nonatomic, readonly) PSGInputSuggestionsExplanationSet *explanationSet;
@property (nonatomic, readonly) NSArray *responseItems;
@property (nonatomic) double servingTimeMillis;
@property (nonatomic) int triggeredItemsCount;
@property (nonatomic) double triggeringTimeMillis;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)explanationSet;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseItems:(id)arg1 explanationSet:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToResponse:(id)arg1;
- (id)responseItems;
- (double)servingTimeMillis;
- (void)setServingTimeMillis:(double)arg1;
- (void)setTriggeredItemsCount:(int)arg1;
- (void)setTriggeringTimeMillis:(double)arg1;
- (int)triggeredItemsCount;
- (double)triggeringTimeMillis;

@end
