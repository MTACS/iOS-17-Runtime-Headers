
@interface HMIVideoAnnotationParser : HMFObject {
    NSArray * _tracks;
}

@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } lastKnownTimeStamp;
@property (readonly) NSArray *tracks;

+ (id)eventForClass:(Class)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 UUID:(id)arg3;

- (void).cxx_destruct;
- (id)eventsForFragment;
- (id)eventsForTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithArray:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastKnownTimeStamp;
- (id)tracks;

@end
