
@interface AVScheduledParameterRamp : NSObject <NSCopying> {
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
}

@property (getter=_additionalFigRepresentationObjects, readonly) NSArray *additionalFigRepresentationObjects;
@property (readonly) id endValue;
@property (readonly) id startValue;
@property (readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (id)_defaultAdditionalFigRepresentationObjects;
+ (id)defaultValue;
+ (id)scheduledParameterRampWithPropertyList:(id)arg1;

- (id)_additionalFigRepresentationObjects;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endValue;
- (unsigned long long)hash;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)isEqual:(id)arg1;
- (id)propertyList;
- (id)scheduledParameterRampInterpolatedToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)startValue;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
