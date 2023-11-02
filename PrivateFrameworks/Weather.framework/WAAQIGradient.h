
@interface WAAQIGradient : NSObject {
    NSMutableDictionary * _colorsByLocation;
    NSMutableArray * _internalStops;
    NSMutableIndexSet * _locationStops;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic, readonly) NSMutableDictionary *colorsByLocation;
@property (nonatomic, retain) NSMutableArray *internalStops;
@property (nonatomic, readonly) NSMutableIndexSet *locationStops;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly, copy) NSArray *stops;

- (void).cxx_destruct;
- (void)addGradientStop:(id)arg1;
- (id)colorsByLocation;
- (id)gradientStopForLocation:(unsigned long long)arg1;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)internalStops;
- (id)locationStops;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setInternalStops:(id)arg1;
- (id)stops;

@end
