
@interface SAAuxiliaryData : NSObject {
    SAFanSpeed * _fanSpeed;
    struct { /* ? */ } ** _mountStatus;
    SATimestamp * _timestamp;
}

+ (id)auxiliaryDataForTimestamp:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;

@end
