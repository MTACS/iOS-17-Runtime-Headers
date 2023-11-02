
@interface PXCMMSharePromptStringGenerator : NSObject

+ (id)_attributedStringWithString:(id)arg1 attributes:(id)arg2 boldFont:(id)arg3 boldRange1:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 boldRange2:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
+ (id)_stringWithComponentsCount:(unsigned long long)arg1 components:(id)arg2 containsOtherPeople:(bool)arg3 outBoldRange1:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 outBoldRange2:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg5;
+ (id)sharePromptStringWithAttributes:(id)arg1 boldFont:(id)arg2 lines:(long long)arg3 width:(double)arg4 names:(id)arg5 containsUnverifiedPersons:(bool)arg6;

@end
