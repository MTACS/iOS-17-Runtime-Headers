
@interface SGMIWarningsDetectionRegex : NSRegularExpression {
    NSNumber * _privateGroupsCount;
}

@property (nonatomic, readonly) NSNumber *privateGroupsCount;

+ (id)hashedValueOfString:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPattern:(id)arg1;
- (id)initWithPattern:(id)arg1 compiledRegexCache:(id)arg2;
- (id)matchForString:(id)arg1;
- (id)matchForString:(id)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)matchesForString:(id)arg1;
- (id)matchesForString:(id)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 onlyFirstMatch:(bool)arg3;
- (id)privateGroupsCount;

@end
