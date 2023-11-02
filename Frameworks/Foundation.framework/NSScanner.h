
@interface NSScanner : NSObject <NSCopying>

@property bool caseSensitive;
@property (copy) NSCharacterSet *charactersToBeSkipped;
@property (retain) id locale;
@property unsigned long long scanLocation;
@property (readonly, copy) NSString *string;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)localizedScannerWithString:(id)arg1;
+ (id)scannerWithString:(id)arg1;

- (bool)_deprecated_scanDecimal:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; }*)arg1;
- (bool)_deprecated_scanDouble:(double*)arg1;
- (bool)_deprecated_scanFloat:(float*)arg1;
- (bool)_deprecated_scanHexInt32:(unsigned int*)arg1;
- (bool)_deprecated_scanInt32:(int*)arg1;
- (unsigned long long)_deprecated_scanLocation;
- (bool)_deprecated_scanString:(id)arg1 intoString:(id*)arg2;
- (bool)_deprecated_scanUpToCharactersFromSet:(id)arg1 intoString:(id*)arg2;
- (void)_deprecated_setScanLocation:(unsigned long long)arg1;
- (id)_invertedSkipSet;
- (id)_remainingString;
- (bool)_scanDecimal:(unsigned long long)arg1 into:(long long*)arg2;
- (bool)caseSensitive;
- (id)charactersToBeSkipped;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithString:(id)arg1;
- (bool)isAtEnd;
- (id)locale;
- (bool)scanCharactersFromSet:(id)arg1 intoString:(id*)arg2;
- (bool)scanDecimal:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; }*)arg1;
- (bool)scanDouble:(double*)arg1;
- (bool)scanFloat:(float*)arg1;
- (bool)scanHexDouble:(double*)arg1;
- (bool)scanHexFloat:(float*)arg1;
- (bool)scanHexInt:(unsigned int*)arg1;
- (bool)scanHexLongLong:(unsigned long long*)arg1;
- (bool)scanInt:(int*)arg1;
- (bool)scanInteger:(long long*)arg1;
- (unsigned long long)scanLocation;
- (bool)scanLongLong:(long long*)arg1;
- (bool)scanString:(id)arg1 intoString:(id*)arg2;
- (bool)scanUnsignedInteger:(unsigned long long*)arg1;
- (bool)scanUnsignedLongLong:(unsigned long long*)arg1;
- (bool)scanUpToCharactersFromSet:(id)arg1 intoString:(id*)arg2;
- (bool)scanUpToString:(id)arg1 intoString:(id*)arg2;
- (void)setCaseSensitive:(bool)arg1;
- (void)setCharactersToBeSkipped:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setScanLocation:(unsigned long long)arg1;
- (id)string;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

- (bool)scanCGFloat:(double*)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (bool)_cn_scanHexChar:(char *)arg1;

// Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfFirstMatchWithRegularExpression:(id)arg1;
- (bool)ec_scanUpToRegularExpression:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (id)mf_nextTokenWithPunctuation:(struct __CFCharacterSet { }*)arg1;
- (bool)mf_scanUpAndOverString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (bool)scanChoicePattern:(out id*)arg1 error:(out id*)arg2;
- (bool)scanGroupPattern:(out id*)arg1 error:(out id*)arg2;
- (bool)scanListPattern:(out id*)arg1 error:(out id*)arg2;
- (bool)scanPattern:(out id*)arg1 error:(out id*)arg2;
- (bool)scanPatterns:(out id*)arg1 from:(id)arg2 to:(id)arg3 delimiter:(id)arg4 error:(out id*)arg5;
- (bool)scanRepeatPattern:(inout id*)arg1 error:(out id*)arg2;
- (bool)scanTokenPattern:(out id*)arg1 error:(out id*)arg2;
- (id)substringFromScanLocation;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (bool)tsu_scanCGFloat:(double*)arg1;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

- (bool)tsu_scanCGFloat:(double*)arg1;

// Image: /System/Library/PrivateFrameworks/TypistFramework.framework/TypistFramework

- (struct CGPoint { double x1; double x2; })scanPoint;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

- (bool)tsu_scanCGFloat:(double*)arg1;

@end
