
@interface HAPKeychainStoreRemovedAccessory : HMFObject <HMFLogging> {
    NSString * _accessoryName;
    NSDate * _creationDate;
    NSError * _removeError;
}

@property (nonatomic, readonly) NSString *accessoryName;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSError *removeError;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessoryName;
- (id)creationDate;
- (id)description;
- (id)initWithName:(id)arg1 creationDate:(id)arg2;
- (id)removeError;
- (void)setRemoveError:(id)arg1;

@end
