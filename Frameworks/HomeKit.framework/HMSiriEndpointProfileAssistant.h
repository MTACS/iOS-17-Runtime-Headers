
@interface HMSiriEndpointProfileAssistant : NSObject <HMFLogging, HMFObject, HMObjectMerge, NSSecureCoding> {
    long long  _active;
    NSNumber * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSUUID * _uniqueIdentifier;
}

@property long long active;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSNumber *identifier;
@property (retain) NSString *name;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (getter=isSiriAssistant, nonatomic, readonly) bool siriAssistant;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (id)logCategory;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;
+ (id)uniqueIdentifierNamespace;

- (void).cxx_destruct;
- (long long)active;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 active:(long long)arg3;
- (bool)isSiriAssistant;
- (bool)mergeFromNewObject:(id)arg1;
- (id)name;
- (id)privateDescription;
- (void)setActive:(long long)arg1;
- (void)setName:(id)arg1;
- (id)shortDescription;
- (id)uniqueIdentifier;

@end
