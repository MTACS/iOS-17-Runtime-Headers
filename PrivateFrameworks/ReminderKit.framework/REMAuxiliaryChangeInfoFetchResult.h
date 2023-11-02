
@interface REMAuxiliaryChangeInfoFetchResult : NSObject {
    NSArray * _auxiliaryChangeInfos;
    NSMutableDictionary * _changeObjectForAuxiliaryChangeInfoMap;
    Class  _typedKlass;
}

@property (nonatomic, readonly) NSArray *auxiliaryChangeInfos;
@property (nonatomic, retain) NSMutableDictionary *changeObjectForAuxiliaryChangeInfoMap;
@property (nonatomic) Class typedKlass;

+ (id)auxiliaryChangeInfoFetchResultOfType:(Class)arg1;

- (void).cxx_destruct;
- (id)auxiliaryChangeInfoFromData:(id)arg1 withObjectID:(id)arg2 fromChangeObject:(id)arg3 error:(id*)arg4;
- (id)auxiliaryChangeInfos;
- (id)changeObjectForAuxiliaryChangeInfo:(id)arg1;
- (id)changeObjectForAuxiliaryChangeInfoMap;
- (id)initWithAuxiliaryChangeInfoType:(Class)arg1;
- (void)setAuxiliaryChangeInfos:(id)arg1;
- (void)setChangeObjectForAuxiliaryChangeInfoMap:(id)arg1;
- (void)setTypedKlass:(Class)arg1;
- (Class)typedKlass;

@end
