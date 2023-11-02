
@interface MTRSetupPayload : NSObject <NSSecureCoding> {
    struct SetupPayload { 
        unsigned char version; 
        unsigned short vendorID; 
        unsigned short productID; 
        unsigned char commissioningFlow; 
        struct Optional<chip::BitFlags<chip::RendezvousInformationFlag, unsigned char>> { 
            bool mHasValue; 
            union Value { 
                struct BitFlags<chip::RendezvousInformationFlag, unsigned char> { 
                    unsigned char mValue; 
                } mData; 
            } mValue; 
        } rendezvousInformation; 
        struct SetupDiscriminator { 
            unsigned int mDiscriminator : 12; 
            unsigned int mIsShortDiscriminator : 1; 
        } discriminator; 
        unsigned int setUpPINCode; 
        struct map<unsigned char, chip::OptionalQRCodeInfo, std::less<unsigned char>, std::allocator<std::pair<const unsigned char, chip::OptionalQRCodeInfo>>> { 
            struct __tree<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::less<unsigned char>>, std::allocator<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::less<unsigned char>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } optionalVendorData; 
        struct map<unsigned char, chip::OptionalQRCodeInfoExtension, std::less<unsigned char>, std::allocator<std::pair<const unsigned char, chip::OptionalQRCodeInfoExtension>>> { 
            struct __tree<std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, std::less<unsigned char>>, std::allocator<std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfoExtension>, std::less<unsigned char>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } optionalExtensionData; 
    }  _chipSetupPayload;
    unsigned long long  _commissioningFlow;
    unsigned long long  _discoveryCapabilities;
    NSNumber * _discriminator;
    bool  _hasShortDiscriminator;
    NSNumber * _productID;
    NSString * _serialNumber;
    NSNumber * _setupPasscode;
    NSNumber * _vendorID;
    NSNumber * _version;
}

@property (nonatomic) unsigned long long commissioningFlow;
@property (nonatomic) unsigned long long discoveryCapabilities;
@property (nonatomic, copy) NSNumber *discriminator;
@property (nonatomic) bool hasShortDiscriminator;
@property (nonatomic, copy) NSNumber *productID;
@property (nonatomic, copy) NSNumber *rendezvousInformation;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, copy) NSNumber *setUpPINCode;
@property (nonatomic, copy) NSNumber *setupPasscode;
@property (nonatomic, copy) NSNumber *vendorID;
@property (nonatomic, copy) NSNumber *version;

// Image: /System/Library/Frameworks/Matter.framework/Matter

+ (id)_boxDiscoveryCapabilities:(unsigned long long)arg1;
+ (unsigned long long)_unboxDiscoveryCapabilities:(id)arg1;
+ (struct Optional<chip::BitFlags<chip::RendezvousInformationFlag, unsigned char>> { bool x1; union Value { struct BitFlags<chip::RendezvousInformationFlag, unsigned char> { unsigned char x_1_2_1; } x_2_1_1; } x2; })convertDiscoveryCapabilities:(unsigned long long)arg1;
+ (unsigned long long)generateRandomPIN;
+ (id)generateRandomSetupPasscode;
+ (void)initialize;
+ (bool)isQRCode:(id)arg1;
+ (id)new;
+ (id)setupPayloadWithOnboardingPayload:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;
+ (unsigned char)unconvertCommissioningFlow:(unsigned long long)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)commissioningFlow;
- (unsigned long long)convertCommissioningFlow:(unsigned char)arg1;
- (unsigned long long)convertRendezvousFlags:(const void*)arg1;
- (unsigned long long)discoveryCapabilities;
- (id)discriminator;
- (void)encodeWithCoder:(id)arg1;
- (id)getAllOptionalVendorData:(id*)arg1;
- (void)getSerialNumber:(struct SetupPayload { unsigned char x1; unsigned short x2; unsigned short x3; unsigned char x4; struct Optional<chip::BitFlags<chip::RendezvousInformationFlag, unsigned char>> { bool x_5_1_1; union Value { struct BitFlags<chip::RendezvousInformationFlag, unsigned char> { unsigned char x_1_3_1; } x_2_2_1; } x_5_1_2; } x5; struct SetupDiscriminator { unsigned int x_6_1_1 : 12; unsigned int x_6_1_2 : 1; } x6; unsigned int x7; struct map<unsigned char, chip::OptionalQRCodeInfo, std::less<unsigned char>, std::allocator<std::pair<const unsigned char, chip::OptionalQRCodeInfo>>> { struct __tree<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::less<unsigned char>>, std::allocator<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>>> { void *x_1_2_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::less<unsigned char>>> { unsigned long long x_3_3_1; } x_1_2_3; } x_8_1_1; } x8; })arg1;
- (bool)hasShortDiscriminator;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSetupPasscode:(id)arg1 discriminator:(id)arg2;
- (id)initWithSetupPayload:(struct SetupPayload { unsigned char x1; unsigned short x2; unsigned short x3; unsigned char x4; struct Optional<chip::BitFlags<chip::RendezvousInformationFlag, unsigned char>> { bool x_5_1_1; union Value { struct BitFlags<chip::RendezvousInformationFlag, unsigned char> { unsigned char x_1_3_1; } x_2_2_1; } x_5_1_2; } x5; struct SetupDiscriminator { unsigned int x_6_1_1 : 12; unsigned int x_6_1_2 : 1; } x6; unsigned int x7; struct map<unsigned char, chip::OptionalQRCodeInfo, std::less<unsigned char>, std::allocator<std::pair<const unsigned char, chip::OptionalQRCodeInfo>>> { struct __tree<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::less<unsigned char>>, std::allocator<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>>> { void *x_1_2_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned char, std::__value_type<unsigned char, chip::OptionalQRCodeInfo>, std::less<unsigned char>>> { unsigned long long x_3_3_1; } x_1_2_3; } x_8_1_1; } x8; })arg1;
- (id)manualEntryCode;
- (id)productID;
- (id)qrCodeString:(id*)arg1;
- (id)rendezvousInformation;
- (id)serialNumber;
- (void)setCommissioningFlow:(unsigned long long)arg1;
- (void)setDiscoveryCapabilities:(unsigned long long)arg1;
- (void)setDiscriminator:(id)arg1;
- (void)setHasShortDiscriminator:(bool)arg1;
- (void)setProductID:(id)arg1;
- (void)setRendezvousInformation:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSetUpPINCode:(id)arg1;
- (void)setSetupPasscode:(id)arg1;
- (id)setUpPINCode;
- (void)setVendorID:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)setupPasscode;
- (id)vendorID;
- (id)version;

// Image: /System/Library/PrivateFrameworks/HomeKitMatter.framework/HomeKitMatter

- (bool)isEqualAsOnboarding:(id)arg1;

@end
