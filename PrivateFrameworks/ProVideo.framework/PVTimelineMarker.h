
@interface PVTimelineMarker : NSObject {
    int  _color;
    NSString * _comment;
    NSString * _label;
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
    int  _type;
}

@property (nonatomic) int color;
@property (nonatomic, copy) NSString *comment;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property (nonatomic) int type;

+ (id)markerWithOZXTimeMarker:(struct _OZXTimeMarker { double x1; double x2; struct __CFString {} *x3; struct __CFString {} *x4; unsigned int x5; unsigned int x6; }*)arg1;
+ (id)markerWithOZXTimeMarkerFigTime:(struct _OZXTimeMarkerFigTime { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct __CFString {} *x3; struct __CFString {} *x4; unsigned int x5; unsigned int x6; }*)arg1;
+ (id)markerWithType:(int)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;

- (void).cxx_destruct;
- (int)color;
- (id)comment;
- (id)initWithType:(int)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (id)label;
- (void)setColor:(int)arg1;
- (void)setComment:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setType:(int)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (int)type;

@end
