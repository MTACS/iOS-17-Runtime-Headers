
@interface CUIKTimeIntervalTextProvider : NSObject

+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfAnnontatedTime:(id)arg1 matchingPattern:(id /* block */)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfDesignatorInAnnotatedTime:(id)arg1;
+ (id)_stringByRemovingDesignatorRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromString:(id)arg2;
+ (id)_timeIntervalAttributedTextWithStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 designatorRequiresWhitespace:(bool)arg4 smallCapsAllowed:(bool)arg5 dropLeftRedundantDesignator:(bool)arg6 keepRedundantDesignator:(bool)arg7;
+ (id)timeIntervalAttributedTextWithStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3;
+ (id)timeIntervalAttributedTextWithStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 font:(struct __CTFont { }*)arg4;
+ (id)timeIntervalAttributedTextWithStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 font:(struct __CTFont { }*)arg4 designatorRequiresWhitespace:(bool)arg5 smallCapsAllowed:(bool)arg6 dropLeftRedundantDesignator:(bool)arg7;
+ (id)timeIntervalAttributedTextWithStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 keepRedundantDesignator:(bool)arg4;

@end
