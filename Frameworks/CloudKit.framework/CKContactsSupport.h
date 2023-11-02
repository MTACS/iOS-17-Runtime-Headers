
@interface CKContactsSupport : NSObject

@property (nonatomic, readonly) Class CKCNContact;
@property (nonatomic, readonly) Class CKCNPhoneNumber;

+ (id)sharedInstance;

- (Class)CKCNContact;
- (Class)CKCNPhoneNumber;

@end
