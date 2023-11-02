
@interface HMCameraSignificantEventPersonFamiliarityNotificationCondition : NSObject <HMFObject, NSCopying> {
    unsigned long long  _personFamiliarityOptions;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long personFamiliarityOptions;
@property (readonly, copy) NSPredicate *predicate;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;

- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPersonFamiliarityOptions:(unsigned long long)arg1;
- (id)initWithPredicate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)personFamiliarityOptions;
- (id)predicate;
- (id)privateDescription;
- (id)shortDescription;

@end
