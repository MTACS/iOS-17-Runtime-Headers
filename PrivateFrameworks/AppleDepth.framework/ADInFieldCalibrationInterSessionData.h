
@interface ADInFieldCalibrationInterSessionData : NSObject {
    ADInterSessionFilter * _isf;
    ADInterSessionFilterParameters * _isfParameters;
    unsigned int  _version;
}

@property (nonatomic) unsigned int version;

+ (id)interSessionDataFromFile:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (long long)insertEntryAndCalculate:(id)arg1 withWeight:(double)arg2 toResult:(id*)arg3;
- (id)persistenceData;
- (bool)reset;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;

@end
