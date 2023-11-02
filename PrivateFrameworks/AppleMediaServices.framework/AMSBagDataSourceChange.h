
@interface AMSBagDataSourceChange : NSObject {
    NSString * _accountIdentifier;
    NSSet * _changedKeys;
    NSString * _loadedBagIdentifier;
    NSString * _loadedBagPartialIdentifier;
    NSDictionary * _originalData;
    NSDate * _originalExpirationDate;
    NSString * _profile;
    NSString * _profileVersion;
    NSDictionary * _updatedData;
    NSDate * _updatedExpirationDate;
}

@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSSet *changedKeys;
@property (nonatomic, readonly) NSString *loadedBagIdentifier;
@property (nonatomic, readonly) NSString *loadedBagPartialIdentifier;
@property (nonatomic, readonly) NSDictionary *originalData;
@property (nonatomic, readonly) NSDate *originalExpirationDate;
@property (nonatomic, readonly) NSString *profile;
@property (nonatomic, readonly) NSString *profileVersion;
@property (nonatomic, readonly) NSDictionary *updatedData;
@property (nonatomic, readonly) NSDate *updatedExpirationDate;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)changedKeys;
- (id)initWithProfile:(id)arg1 profileVersion:(id)arg2 originalData:(id)arg3 originalExpirationDate:(id)arg4 updatedData:(id)arg5 updatedExpirationDate:(id)arg6 changedKeys:(id)arg7 loadedBagIdentifier:(id)arg8 loadedBagPartialIdentifier:(id)arg9 accountIdentifier:(id)arg10;
- (id)loadedBagIdentifier;
- (id)loadedBagPartialIdentifier;
- (id)originalData;
- (id)originalExpirationDate;
- (id)profile;
- (id)profileVersion;
- (id)updatedData;
- (id)updatedExpirationDate;

@end
