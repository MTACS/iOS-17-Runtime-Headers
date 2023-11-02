
@interface HKPIIRedactor : NSObject <NSCopying, NSSecureCoding> {
    NSRegularExpression * _SSNRegex;
    NSDataDetector * _dataDetectorAll;
    NSDataDetector * _dataDetectorSkipLink;
    NSDataDetector * _dataDetectorSkipLinkSkipPhoneNumbers;
    NSDataDetector * _dataDetectorSkipPhoneNumbers;
    NSRegularExpression * _fullWordRegex;
    NSRegularExpression * _longNumberRegex;
    NSSet * _names;
}

@property (nonatomic, readonly) NSRegularExpression *SSNRegex;
@property (nonatomic, readonly) NSDataDetector *dataDetectorAll;
@property (nonatomic, readonly) NSDataDetector *dataDetectorSkipLink;
@property (nonatomic, readonly) NSDataDetector *dataDetectorSkipLinkSkipPhoneNumbers;
@property (nonatomic, readonly) NSDataDetector *dataDetectorSkipPhoneNumbers;
@property (nonatomic, readonly) NSRegularExpression *fullWordRegex;
@property (nonatomic, readonly) NSRegularExpression *longNumberRegex;
@property (nonatomic, readonly) NSSet *names;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_SSNRegularExpressionWithError:(id*)arg1;
+ (id)_longNumberRegexWithError:(id*)arg1;
+ (id)_redactFullWordRegexWithError:(id*)arg1;
+ (id)redactorWithNames:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SSNRegex;
- (unsigned long long)_redactDataDetectorTypesFromString:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)_redactLongNumbersFromString:(id)arg1;
- (unsigned long long)_redactNamesFromString:(id)arg1;
- (unsigned long long)_redactSSNsFromString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataDetectorAll;
- (id)dataDetectorSkipLink;
- (id)dataDetectorSkipLinkSkipPhoneNumbers;
- (id)dataDetectorSkipPhoneNumbers;
- (void)encodeWithCoder:(id)arg1;
- (id)fullWordRegex;
- (id)initWithCoder:(id)arg1;
- (id)longNumberRegex;
- (id)names;
- (id)redactedStringWithString:(id)arg1;
- (id)redactedStringWithString:(id)arg1 options:(unsigned long long)arg2;
- (id)redactedStringWithString:(id)arg1 options:(unsigned long long)arg2 redactedCount:(unsigned long long*)arg3;
- (id)redactedStringWithString:(id)arg1 redactedCount:(unsigned long long*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)redactorWithProfile:(id)arg1 error:(id*)arg2;

@end
