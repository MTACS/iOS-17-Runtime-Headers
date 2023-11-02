
@interface GEOComposedTransitBaseRouteSegment : GEOComposedRouteSegment {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _transitStepRange;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)endingTransitStop;
- (id)initWithCoder:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 stepRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 transitStepRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 segmentIndex:(unsigned long long)arg5;
- (id)startingTransitStop;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })transitStepRange;

@end
