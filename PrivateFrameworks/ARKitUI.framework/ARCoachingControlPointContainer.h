
@interface ARCoachingControlPointContainer : NSObject {
    struct vector<ARCoachingControlPoint, std::allocator<ARCoachingControlPoint>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<ARCoachingControlPoint *, std::allocator<ARCoachingControlPoint>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _controlPoints;
}

@property (nonatomic, readonly) struct { float x1; }*controlPoints;
@property (nonatomic, readonly) unsigned int numControlPoints;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { float x1; }*)controlPoints;
- (id)initWithControlPoints:(struct { float x1; }*)arg1 numControlPoints:(int)arg2;
- (unsigned int)numControlPoints;
- (void)overwriteWithControlPoints:(struct { float x1; }*)arg1 numControlPoints:(int)arg2;

@end
