
@interface SXLayoutResult : NSObject {
    <SXDOM> * _DOM;
    SXLayoutBlueprint * _blueprint;
    double  _duration;
}

@property (nonatomic, readonly) <SXDOM> *DOM;
@property (nonatomic, readonly) SXLayoutBlueprint *blueprint;
@property (nonatomic, readonly) double duration;

- (void).cxx_destruct;
- (id)DOM;
- (id)blueprint;
- (double)duration;
- (id)initWithLayoutBlueprint:(id)arg1 DOM:(id)arg2 duration:(double)arg3;

@end
