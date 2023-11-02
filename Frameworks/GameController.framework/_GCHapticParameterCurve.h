
@interface _GCHapticParameterCurve : NSObject {
    NSMutableArray * _curve;
}

@property (nonatomic, retain) NSMutableArray *curve;

- (void).cxx_destruct;
- (id)curve;
- (id)initWithHapticCommand:(const void*)arg1;
- (void)setCurve:(id)arg1;

@end
