
@interface HDCyclingDataCollectionForwarder : NSObject <HDDataCollectionForwarder> {
    CMBikeSensor * _cmBikeSensor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newBikeSensor;
- (id)init;
- (void)insertSamples:(id)arg1 device:(id)arg2;

@end
