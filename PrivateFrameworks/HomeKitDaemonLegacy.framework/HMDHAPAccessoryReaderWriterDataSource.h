
@interface HMDHAPAccessoryReaderWriterDataSource : HMFObject <HMDHAPAccessoryReaderWriterDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isWholeHomeBluetoothSupported, readonly) bool wholeHomeBluetoothSupported;

- (bool)isWholeHomeBluetoothSupported;

@end
