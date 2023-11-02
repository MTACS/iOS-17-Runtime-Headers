
@interface DDResultTracker : NSObject {
    unsigned int  countRemainingByCategory;
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; } * existingAddressResult;
    unsigned long long  maximumDistance;
    unsigned long long  maximumDistanceForEmails;
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; } * referenceResult;
    unsigned long long  referenceResultLocation;
    NSMutableArray * resultsAfter;
    NSMutableArray * resultsBefore;
    bool  sortByProximity;
    unsigned int  totalCountRemaining;
}

@property unsigned long long maximumDistance;
@property unsigned long long maximumDistanceForEmails;
@property (readonly) unsigned int totalCountRemaining;

- (void).cxx_destruct;
- (bool)addResultIfAppropriate:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1 referenceDate:(id)arg2 referenceTimeZone:(id)arg3;
- (void)dealloc;
- (id)initWithReferenceResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1;
- (unsigned long long)maximumDistance;
- (unsigned long long)maximumDistanceForEmails;
- (id)results;
- (void)setMaximumDistance:(unsigned long long)arg1;
- (void)setMaximumDistanceForEmails:(unsigned long long)arg1;
- (unsigned int)totalCountRemaining;

@end
