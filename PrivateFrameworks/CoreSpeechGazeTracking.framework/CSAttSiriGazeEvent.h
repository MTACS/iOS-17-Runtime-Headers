
@interface CSAttSiriGazeEvent : NSObject {
    CSAttSiriGazeAreaOfInterest * _aoi;
    unsigned long long  _eventTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _gazePoint;
    unsigned long long  _gazeState;
}

@property (readonly) CSAttSiriGazeAreaOfInterest *aoi;
@property (readonly) unsigned long long eventTimestamp;
@property (readonly) struct CGPoint { double x1; double x2; } gazePoint;
@property (readonly) unsigned long long gazeState;

- (void).cxx_destruct;
- (id)aoi;
- (unsigned long long)eventTimestamp;
- (struct CGPoint { double x1; double x2; })gazePoint;
- (unsigned long long)gazeState;
- (id)initWithArea:(id)arg1 state:(unsigned long long)arg2 timestamp:(unsigned long long)arg3;
- (id)initWithAreaAndPoint:(id)arg1 gazePoint:(struct CGPoint { double x1; double x2; })arg2 state:(unsigned long long)arg3 timestamp:(unsigned long long)arg4;

@end
