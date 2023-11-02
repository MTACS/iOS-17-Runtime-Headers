
@interface HAP2TLVAccessorySignatureReadRequest : NSObject <HAPTLVProtocol, NSCopying> {
    HAP2TLVParamAccessoryList * _accessoryList;
}

@property (nonatomic, retain) HAP2TLVParamAccessoryList *accessoryList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)accessoryList;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithAccessoryList:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setAccessoryList:(id)arg1;

@end
