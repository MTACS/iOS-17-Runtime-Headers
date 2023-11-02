
@interface ExampleEvent : NSObject <BMStoreData> {
    unsigned int  _dataVersion;
    NSData * _foo;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSData *foo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)foo;
- (id)initWithFoo:(id)arg1;
- (id)serialize;

@end
