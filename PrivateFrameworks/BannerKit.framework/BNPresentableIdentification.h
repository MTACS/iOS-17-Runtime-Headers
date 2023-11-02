
@interface BNPresentableIdentification : NSObject <BNPresentableIdentifying, BNPresentableUniquelyIdentifying, BSXPCSecureCoding, NSCopying> {
    NSString * _requestIdentifier;
    NSString * _requesterIdentifier;
    NSUUID * _uniquePresentableIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly, copy) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSUUID *uniquePresentableIdentifier;

+ (id)genericIdentificationForPresentable:(id)arg1;
+ (id)identificationWithRequesterIdentifier:(id)arg1;
+ (id)identificationWithRequesterIdentifier:(id)arg1 requestIdentifier:(id)arg2;
+ (id)identificationWithRequesterIdentifier:(id)arg1 requestIdentifier:(id)arg2 uniqueIdentifier:(id)arg3;
+ (id)requesterIdentificationForPresentable:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (id)uniqueIdentificationForPresentable:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithRequesterIdentifier:(id)arg1 requestIdentifier:(id)arg2 uniqueIdentifier:(id)arg3;
- (id)requestIdentifier;
- (id)requesterIdentifier;
- (id)uniquePresentableIdentifier;

@end
