
@interface _HDFakeDataGenerator : NSObject {
    double  _interval;
    double  _lastGenerationTime;
    double  _nextGenerationTime;
    HKQuantityType * _type;
    id /* block */  _valueGenerator;
}

- (void).cxx_destruct;

@end
