
@interface HMCameraSignificantEventReasonNotificationCondition : NSObject <HMFObject, NSCopying> {
    unsigned long long  _significantEventTypes;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSPredicate *predicate;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) unsigned long long significantEventTypes;
@property (readonly) Class superclass;

+ (id)shortDescription;

- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPredicate:(id)arg1;
- (id)initWithSignificantEventTypes:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (id)privateDescription;
- (id)shortDescription;
- (unsigned long long)significantEventTypes;

@end
