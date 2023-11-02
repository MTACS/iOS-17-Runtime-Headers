
@interface EMFollowUp : NSObject <NSCopying, NSSecureCoding> {
    NSString * _jsonStringForModelEvaluationForSuggestions;
    EFPair * _pair;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) NSString *jsonStringForModelEvaluationForSuggestions;
@property (nonatomic, readonly) EFPair *pair;
@property (nonatomic, readonly) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)containsDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 jsonStringForModelEvaluationForSuggestions:(id)arg3;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (id)jsonStringForModelEvaluationForSuggestions;
- (id)pair;
- (id)startDate;

@end
