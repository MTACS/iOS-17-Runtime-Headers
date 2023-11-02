
@interface HMHAPMetadata : NSObject {
    NSDictionary * _hapCategoryMap;
    NSDictionary * _hapChrMap;
    NSDictionary * _hapSvcMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNumber * _version;
}

@property (nonatomic, retain) NSDictionary *hapCategoryMap;
@property (nonatomic, retain) NSDictionary *hapChrMap;
@property (nonatomic, retain) NSDictionary *hapSvcMap;
@property (retain) NSNumber *version;

+ (id)encodeProtobufWithVersion:(id)arg1 characteristics:(id)arg2 services:(id)arg3 categories:(id)arg4;
+ (id)getSharedInstance;

- (void).cxx_destruct;
- (bool)applyProtoBufData:(id)arg1;
- (id)categoryForCategoryUUIDString:(id)arg1;
- (id)categoryForIdentifier:(id)arg1;
- (id)characteristicTypeDescription:(id)arg1;
- (id)hapCategoryMap;
- (id)hapChrMap;
- (id)hapSvcMap;
- (id)serviceTypeDescription:(id)arg1;
- (void)setHapCategoryMap:(id)arg1;
- (void)setHapChrMap:(id)arg1;
- (void)setHapSvcMap:(id)arg1;
- (void)setVersion:(id)arg1;
- (bool)shouldNotCacheCharacteristicOfType:(id)arg1;
- (id)version;

@end
