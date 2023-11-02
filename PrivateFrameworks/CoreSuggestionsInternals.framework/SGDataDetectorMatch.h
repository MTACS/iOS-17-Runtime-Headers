
@interface SGDataDetectorMatch : NSObject <NSSecureCoding> {
    bool  _allDay;
    bool  _approximateTime;
    NSDate * _detectedDate;
    NSDate * _detectedEndDate;
    NSTimeZone * _detectedEndTimeZone;
    NSTimeZone * _detectedTimeZone;
    bool  _inferredDate;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _labelRange;
    NSString * _labelString;
    unsigned int  _matchType;
    int  _parsecDomain;
    NSString * _parsecWikidataQid;
    bool  _partialDate;
    SGPostalAddressComponents * _postalAddressComponents;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _valueRange;
    NSString * _valueString;
}

@property (nonatomic, readonly) bool allDay;
@property (nonatomic, readonly) bool approximateTime;
@property (nonatomic, readonly) NSDate *detectedDate;
@property (nonatomic, readonly) NSDate *detectedEndDate;
@property (nonatomic, readonly) NSTimeZone *detectedEndTimeZone;
@property (nonatomic, readonly) NSTimeZone *detectedTimeZone;
@property (nonatomic, readonly) bool inferredDate;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } labelRange;
@property (nonatomic, readonly) NSString *labelString;
@property (nonatomic, readonly) unsigned int matchType;
@property (nonatomic, readonly) int parsecDomain;
@property (nonatomic, readonly) NSString *parsecWikidataQid;
@property (nonatomic, readonly) bool partialDate;
@property (nonatomic, readonly) SGPostalAddressComponents *postalAddressComponents;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } valueRange;
@property (nonatomic, readonly) NSString *valueString;

+ (id)_detectionsInPlainText:(id)arg1 withEligibleRegions:(id)arg2 ddSignature:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 baseDate:(id)arg4;
+ (bool)approximateTimeForDataDetectorResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1;
+ (id)detectionsAndSignatureInText:(id)arg1 eligibleRegions:(id)arg2 baseDate:(id)arg3;
+ (id)detectionsInPlainText:(id)arg1 baseDate:(id)arg2;
+ (id)detectionsInPlainText:(id)arg1 withEligibleRegions:(id)arg2;
+ (id)detectionsInPlainText:(id)arg1 withEligibleRegions:(id)arg2 baseDate:(id)arg3;
+ (bool)inferredDateForDataDetectorResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1;
+ (bool)partialDateForDataDetectorResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1;
+ (void)resetUnusedScannersForTesting;
+ (bool)stringHasDatesOrTimes:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allDay;
- (bool)approximateTime;
- (id)description;
- (id)detectedDate;
- (id)detectedEndDate;
- (id)detectedEndTimeZone;
- (id)detectedTimeZone;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)inferredDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithDetectedDate:(id)arg1 detectedTimeZone:(id)arg2 detectedEndDate:(id)arg3 detectedEndTimeZone:(id)arg4 matchType:(unsigned int)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 labelRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7 labelString:(id)arg8 valueRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg9 valueString:(id)arg10 allDay:(bool)arg11 inferredDate:(bool)arg12 approximateTime:(bool)arg13 partialDate:(bool)arg14;
- (id)initWithLookupHintInDomain:(int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 labelRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 labelString:(id)arg4 valueRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 valueString:(id)arg6 qid:(id)arg7;
- (id)initWithMatchType:(unsigned int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 labelRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 labelString:(id)arg4 valueRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 valueString:(id)arg6;
- (id)initWithMatchType:(unsigned int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 labelRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 labelString:(id)arg4 valueRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 valueString:(id)arg6 postalAddressComponents:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDataDetectorMatch:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })labelRange;
- (id)labelString;
- (unsigned int)matchType;
- (int)parsecDomain;
- (id)parsecWikidataQid;
- (bool)partialDate;
- (id)postalAddressComponents;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })valueRange;
- (id)valueString;

@end
