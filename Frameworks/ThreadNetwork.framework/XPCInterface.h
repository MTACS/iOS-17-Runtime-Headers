
@interface XPCInterface : NSObject

+ (id)CTCSCreateXPCTransportInterface;
+ (id)CTCSExpectedXPCInterfaceClassesForAllActiveDataSetRecords;
+ (id)CTCSGetExpectedClassesForOptionsOverXPCInterface;
+ (void)CTCSSetExpectedClassesForXPCBrokerInterface:(id)arg1;

@end
