
@interface SWDatastoreFactory : NSObject <SWDatastoreFactory> {
    <SWLogger> * _logger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SWLogger> *logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createDatastoreFromMessage:(id)arg1;
- (id)initWithLogger:(id)arg1;
- (id)logger;

@end
