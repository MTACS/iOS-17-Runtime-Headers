
@interface HMDRemoteAccountHandleMessageDestination : HMDRemoteMessageDestination {
    NSDictionary * _deviceCapabilities;
    HMDAccountHandle * _handle;
    bool  _multicast;
    bool  _restrictToResidentCapable;
}

@property (readonly, copy) NSDictionary *deviceCapabilities;
@property (readonly, copy) HMDAccountHandle *handle;
@property (getter=isMulticast, readonly) bool multicast;
@property bool restrictToResidentCapable;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)deviceCapabilities;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1;
- (id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(bool)arg3;
- (id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(bool)arg3 deviceCapabilities:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isMulticast;
- (id)privateDescription;
- (id)remoteDestinationString;
- (bool)restrictToResidentCapable;
- (void)setRestrictToResidentCapable:(bool)arg1;
- (id)shortDescription;

@end
