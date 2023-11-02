
@interface HMIVideoEventBuffer : HMFObject {
    NSMutableArray * _data;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _maxCapacity;
}

@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (id)extractObjectsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)firstObject;
- (id)initWithMaxCapacity:(long long)arg1;
- (id)neighborsOfObject:(id)arg1;
- (id)objectsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 includeEnd:(bool)arg2;
- (void)removeAllObjects;

@end
