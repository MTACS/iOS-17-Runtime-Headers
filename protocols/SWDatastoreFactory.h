
@protocol SWDatastoreFactory <NSObject>

@required

- (SWDatastore *)createDatastoreFromMessage:(id <SWMessage>)arg1;

@end
