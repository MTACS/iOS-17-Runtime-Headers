
@interface CKObject : NSObject <CKPropertyCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKObjCClass *objcClass;
@property (readonly) Class superclass;

- (id)description;
- (id)dictionaryPropertyEncoding;
- (unsigned long long)hash;
- (id)initWithPropertyDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objcClass;

@end
