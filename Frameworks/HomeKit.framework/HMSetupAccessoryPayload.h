
@interface HMSetupAccessoryPayload : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _accessoryName;
    NSNumber * _categoryNumber;
    HMCHIPAccessorySetupPayload * _chipAccessorySetupPayload;
    long long  _communicationProtocol;
    bool  _paired;
    NSString * _productNumber;
    NSString * _setupCode;
    NSString * _setupID;
    NSURL * _setupPayloadURL;
    bool  _supportsBTLE;
    bool  _supportsIP;
    bool  _supportsWAC;
    NSNumber * _threadIdentifier;
}

@property (nonatomic, readonly, copy) NSString *accessoryName;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, readonly, copy) HMAccessoryCategory *category;
@property (nonatomic, copy) NSNumber *categoryNumber;
@property (nonatomic, retain) HMCHIPAccessorySetupPayload *chipAccessorySetupPayload;
@property (nonatomic, readonly) long long communicationProtocol;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hf_requiresEthernet;
@property (nonatomic, readonly) bool hf_requiresThread;
@property (getter=isPaired, nonatomic) bool paired;
@property (readonly, copy) NSString *privateDescription;
@property (nonatomic, copy) NSString *productNumber;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly) bool requiresMatterCustomCommissioningFlow;
@property (nonatomic, readonly, copy) NSString *setupCode;
@property (nonatomic, copy) NSString *setupID;
@property (nonatomic, copy) NSURL *setupPayloadURL;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsBTLE;
@property (nonatomic) bool supportsIP;
@property (nonatomic) bool supportsWAC;
@property (nonatomic, copy) NSNumber *threadIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryName;
- (id)attributeDescriptions;
- (id)category;
- (id)categoryNumber;
- (id)chipAccessorySetupPayload;
- (long long)communicationProtocol;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHAPSetupCode:(id)arg1;
- (id)initWithHAPSetupPayloadURL:(id)arg1 error:(id*)arg2;
- (id)initWithSetupCode:(id)arg1;
- (id)initWithSetupCode:(id)arg1 communicationProtocol:(long long)arg2;
- (id)initWithSetupPayloadURL:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPaired;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)privateDescription;
- (id)productNumber;
- (bool)requiresMatterCustomCommissioningFlow;
- (void)setCategoryNumber:(id)arg1;
- (void)setChipAccessorySetupPayload:(id)arg1;
- (void)setPaired:(bool)arg1;
- (void)setProductNumber:(id)arg1;
- (void)setSetupID:(id)arg1;
- (void)setSetupPayloadURL:(id)arg1;
- (void)setSupportsBTLE:(bool)arg1;
- (void)setSupportsIP:(bool)arg1;
- (void)setSupportsWAC:(bool)arg1;
- (void)setThreadIdentifier:(id)arg1;
- (id)setupCode;
- (id)setupID;
- (id)setupPayloadURL;
- (id)shortDescription;
- (bool)supportsBTLE;
- (bool)supportsIP;
- (bool)supportsWAC;
- (id)threadIdentifier;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (bool)hf_requiresEthernet;
- (bool)hf_requiresThread;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)debugDescription;
- (id)flagsDescription;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)debugDescription;
- (id)flagsDescription;

@end
