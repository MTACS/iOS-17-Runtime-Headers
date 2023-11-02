
@interface GEOAlmanacRiseTransitSet : NSObject {
    struct _GEORiseTransitSetEvent { 
        double JD; 
        unsigned int type; 
    }  _rise;
    struct _GEORiseTransitSetEvent { 
        double JD; 
        unsigned int type; 
    }  _set;
    struct _GEORiseTransitSetEvent { 
        double JD; 
        unsigned int type; 
    }  _transit;
}

@property (nonatomic, readonly) struct _GEORiseTransitSetEvent { double x1; unsigned int x2; } firstItem;
@property (nonatomic, readonly) bool isIdeal;
@property (nonatomic, readonly) struct _GEORiseTransitSetEvent { double x1; unsigned int x2; } lastItem;
@property (nonatomic, readonly) NSDate *rise;
@property (nonatomic, readonly) NSDate *set;
@property (nonatomic, readonly) NSDate *transit;

- (id).cxx_construct;
- (id)description;
- (struct _GEORiseTransitSetEvent { double x1; unsigned int x2; })firstItem;
- (id)initWithRise:(const struct _GEORiseTransitSetEvent { double x1; unsigned int x2; }*)arg1 transit:(const struct _GEORiseTransitSetEvent { double x1; unsigned int x2; }*)arg2 set:(const struct _GEORiseTransitSetEvent { double x1; unsigned int x2; }*)arg3;
- (bool)isIdeal;
- (struct _GEORiseTransitSetEvent { double x1; unsigned int x2; })lastItem;
- (id)rise;
- (id)set;
- (id)transit;

@end
