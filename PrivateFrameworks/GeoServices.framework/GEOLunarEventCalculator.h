
@interface GEOLunarEventCalculator : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    }  _location;
}

- (id)initWithLocation:(struct { double x1; double x2; })arg1;
- (id)lunarEventsFrom:(id)arg1 to:(id)arg2;
- (id)lunarEventsFrom:(id)arg1 to:(id)arg2 altitude:(double)arg3;

@end
