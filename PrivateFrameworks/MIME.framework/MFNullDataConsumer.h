
@interface MFNullDataConsumer : NSObject <MFDataConsumer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)appendData:(id)arg1;
- (id)description;
- (void)done;

@end
