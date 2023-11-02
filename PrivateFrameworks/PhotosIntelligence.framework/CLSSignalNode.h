
@interface CLSSignalNode : NSObject {
    double  _highPrecisionOperatingPoint;
    double  _highRecallOperatingPoint;
    unsigned long long  _identifier;
    NSString * _name;
    double  _operatingPoint;
}

@property (readonly) double highPrecisionOperatingPoint;
@property (readonly) double highRecallOperatingPoint;
@property (readonly) unsigned long long identifier;
@property (readonly) NSString *name;
@property (readonly) double operatingPoint;

- (void).cxx_destruct;
- (bool)failsHighPrecisionWithConfidence:(double)arg1;
- (bool)failsHighPrecisionWithSignal:(id)arg1;
- (bool)failsHighRecallWithConfidence:(double)arg1;
- (bool)failsHighRecallWithSignal:(id)arg1;
- (bool)failsWithConfidence:(double)arg1;
- (bool)failsWithSignal:(id)arg1;
- (double)highPrecisionOperatingPoint;
- (double)highRecallOperatingPoint;
- (unsigned long long)identifier;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2 operatingPoint:(double)arg3 highPrecisionOperatingPoint:(double)arg4 highRecallOperatingPoint:(double)arg5;
- (id)name;
- (double)operatingPoint;
- (bool)passesHighPrecisionWithConfidence:(double)arg1;
- (bool)passesHighPrecisionWithSignal:(id)arg1;
- (bool)passesHighRecallWithConfidence:(double)arg1;
- (bool)passesHighRecallWithSignal:(id)arg1;
- (bool)passesWithConfidence:(double)arg1;
- (bool)passesWithSignal:(id)arg1;
- (id)signalInfoWithIsHierarchical:(bool)arg1;

@end
