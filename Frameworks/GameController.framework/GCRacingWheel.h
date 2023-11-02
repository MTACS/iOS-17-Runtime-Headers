
@interface GCRacingWheel : NSObject <GCDevice> {
    NSArray * _components;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    <NSCopying><NSObject><NSSecureCoding> * _identifier;
    <GCRacingWheelProductInfo> * _info;
    _GCDevicePhysicalInputComponent * _input;
    bool  _isSnapshot;
}

@property (getter=isAcquired, readonly) bool acquired;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) <NSCopying><NSObject><NSSecureCoding> *identifier;
@property (nonatomic, readonly) GCPhysicalInputProfile *physicalInputProfile;
@property (nonatomic, readonly) NSString *productCategory;
@property (getter=isSnapshot, readonly) bool snapshot;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *vendorName;
@property (readonly) GCRacingWheelInput *wheelInput;

+ (id)connectedRacingWheels;

- (void).cxx_destruct;
- (bool)acquireDeviceWithError:(id*)arg1;
- (id)capture;
- (id)handlerQueue;
- (id)identifier;
- (id)init;
- (id)initWithComponents:(id)arg1;
- (id)initWithIdentifier:(id)arg1 components:(id)arg2;
- (bool)isAcquired;
- (bool)isSnapshot;
- (id)physicalInputProfile;
- (id)productCategory;
- (void)relinquishDevice;
- (void)setHandlerQueue:(id)arg1;
- (id)vendorName;
- (id)wheelInput;

@end
