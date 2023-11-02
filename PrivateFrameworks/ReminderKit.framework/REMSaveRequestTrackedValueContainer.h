
@interface REMSaveRequestTrackedValueContainer : NSObject {
    <REMSaveRequestTrackedValue> * _template;
    <REMSaveRequestTrackedValue> * _weakValue;
}

@property (nonatomic, retain) <REMSaveRequestTrackedValue> *template;
@property (nonatomic) <REMSaveRequestTrackedValue> *weakValue;

- (void).cxx_destruct;
- (id)initWithValue:(id)arg1;
- (void)setTemplate:(id)arg1;
- (void)setWeakValue:(id)arg1;
- (id)template;
- (id)valueForSaveRequest:(id)arg1;
- (id)valueWithoutPerformingCopy;
- (id)weakValue;

@end
