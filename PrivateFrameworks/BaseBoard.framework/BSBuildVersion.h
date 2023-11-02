
@interface BSBuildVersion : NSObject {
    NSString * _majorBuildLetterString;
    long long  _majorBuildNumber;
    NSString * _minorBuildLetterString;
    long long  _minorBuildNumber;
    NSString * _stringRepresentation;
}

@property (nonatomic, readonly, copy) NSString *majorBuildLetterString;
@property (nonatomic, readonly) long long majorBuildNumber;
@property (nonatomic, readonly, copy) NSString *minorBuildLetterString;
@property (nonatomic, readonly) long long minorBuildNumber;
@property (nonatomic, readonly, copy) NSString *stringRepresentation;

+ (id)fromString:(id)arg1;

- (void).cxx_destruct;
- (long long)_compareAgainstBuildVersion:(id)arg1 withPrecision:(long long)arg2;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithString:(id)arg1;
- (bool)isAfter:(id)arg1;
- (bool)isAfter:(id)arg1 withPrecision:(long long)arg2;
- (bool)isBefore:(id)arg1;
- (bool)isBefore:(id)arg1 withPrecision:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isSameAs:(id)arg1;
- (bool)isSameAs:(id)arg1 withPrecision:(long long)arg2;
- (id)majorBuildLetterString;
- (long long)majorBuildNumber;
- (id)minorBuildLetterString;
- (long long)minorBuildNumber;
- (id)stringRepresentation;

@end
