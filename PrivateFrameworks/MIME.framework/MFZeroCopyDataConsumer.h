
@interface MFZeroCopyDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer> {
    MFDataHolder * _dataHolder;
    bool  _done;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)appendData:(id)arg1;
- (id)data;
- (void)done;
- (id)init;

@end
