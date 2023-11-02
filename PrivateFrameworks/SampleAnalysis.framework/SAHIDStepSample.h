
@interface SAHIDStepSample : NSObject {
    unsigned long long  _endSampleIndex;
    SATimestamp * _endTimestamp;
    unsigned long long  _startSampleIndex;
    SATimestamp * _startTimestamp;
    SATask * _task;
    SAThread * _thread;
}

- (void).cxx_destruct;
- (id)debugDescription;

@end
