
@interface HMAccessorySettingsPartialFetchFailureInformation : NSObject <HMFObject, HMMessageEncoding, NSCopying, NSMutableCopying> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _mutableFailureTypes;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *failureTypes;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)failedKeyPaths;
- (id)failureTypes;
- (long long)fetchFailureTypeForKeyPath:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFailureTypes:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)payloadCopy;
- (id)privateDescription;
- (void)setFetchFailureType:(long long)arg1 forKeyPath:(id)arg2;
- (id)shortDescription;

@end
