
@interface HMDNetworkRouterICMPTypeList : NSObject <HAPTLVProtocol, NSCopying> {
    NSMutableArray * _types;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *types;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;
+ (id)typeListFromICMPTypes:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithTypes:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setTypes:(id)arg1;
- (id)types;

@end
