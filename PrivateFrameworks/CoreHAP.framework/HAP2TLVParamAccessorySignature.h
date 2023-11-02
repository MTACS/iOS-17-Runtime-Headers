
@interface HAP2TLVParamAccessorySignature : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _accessoryID;
    HAP2TLVParamServiceList * _serviceList;
}

@property (nonatomic, retain) HAPTLVUnsignedNumberValue *accessoryID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAP2TLVParamServiceList *serviceList;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)accessoryID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithAccessoryID:(id)arg1 serviceList:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (id)serviceList;
- (void)setAccessoryID:(id)arg1;
- (void)setServiceList:(id)arg1;

@end
