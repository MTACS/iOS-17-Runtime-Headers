
@interface _MNMapPointsArray : NSObject {
    unsigned long long  _count;
    struct { double x1; double x2; } * _mapPoints;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) struct { double x1; double x2; }*mapPoints;
@property (nonatomic, readonly) void*points;

- (unsigned long long)count;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (struct { double x1; double x2; }*)mapPoints;
- (void*)points;

@end
