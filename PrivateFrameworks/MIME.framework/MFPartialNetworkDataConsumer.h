
@interface MFPartialNetworkDataConsumer : NSObject <MFDataConsumer> {
    unsigned long long  _length;
    <MFGuaranteedCollectingDataConsumer> * _rawDataConsumer;
    unsigned int  _seenNetworkLineEndings;
    NSData * _strippedData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)appendData:(id)arg1;
- (id)copyDataWithUnixLineEndings;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)init;
- (unsigned long long)length;
- (void)purge;

@end
