
@interface HMFObject : NSObject <HMFObject>

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;

- (id)debugDescription;
- (id)description;
- (id)privateDescription;
- (id)redactedDescription;
- (id)shortDescription;

@end
