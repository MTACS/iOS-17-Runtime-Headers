
@interface BWMotionDataPreserver : NSObject {
    NSString * _currentISPHallPortType;
    unsigned long long  _lengthOfInitialISPHallData;
    unsigned long long  _lengthOfInitialISPMotionData;
    NSString * _name;
    NSMutableData * _preservedISPHallData;
    NSMutableData * _preservedISPMotionData;
    int  _sampleCountOfInitialISPHallData;
    int  _sampleCountOfInitialISPMotionData;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithName:(id)arg1;
- (bool)prependPreservedMotionDataToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)preserveMotionDataForSoonToBeDroppedSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)reset;

@end
