
@interface MFBufferedDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer> {
    NSMutableData * _data;
    int  _fd;
    NSString * _path;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)init;

@end
