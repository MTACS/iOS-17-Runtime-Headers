
@interface HMDResidentDeviceElectionParameters : HMFObject {
    NSSet * _accessories;
    HMFBoolean * _enabled;
    long long  _location;
    HMFProductInfo * _productInfo;
    HMDResidentDevice * _resident;
    HMDHomeKitVersion * _version;
}

@property (readonly, copy) NSSet *accessories;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (getter=isEnabled, readonly, copy) HMFBoolean *enabled;
@property (readonly) long long location;
@property (readonly) HMFProductInfo *productInfo;
@property (readonly) HMDResidentDevice *resident;
@property (readonly) HMDHomeKitVersion *version;

- (void).cxx_destruct;
- (id)accessories;
- (id)attributeDescriptions;
- (long long)compare:(id)arg1;
- (long long)compare:(id)arg1 outCriteria:(unsigned long long*)arg2;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithResident:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithResident:(id)arg1 enabled:(id)arg2 location:(long long)arg3 accessories:(id)arg4;
- (id)isEnabled;
- (bool)isEqual:(id)arg1;
- (long long)location;
- (id)productInfo;
- (id)resident;
- (id)version;

@end
