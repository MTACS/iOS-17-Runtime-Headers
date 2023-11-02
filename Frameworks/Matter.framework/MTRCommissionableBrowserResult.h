
@interface MTRCommissionableBrowserResult : NSObject {
    bool  _commissioningMode;
    NSNumber * _discriminator;
    NSString * _instanceName;
    NSMutableDictionary * _interfaces;
    struct Optional<chip::Controller::SetUpCodePairerParameters> { 
        bool mHasValue; 
        union Value { 
            struct SetUpCodePairerParameters { 
                struct PeerAddress { 
                    struct IPAddress { 
                        unsigned int Addr[4]; 
                    } mIPAddress; 
                    unsigned char mTransportType; 
                    unsigned short mPort; 
                    struct InterfaceId { 
                        unsigned int mPlatformInterface; 
                    } mInterface; 
                } mPeerAddress; 
                unsigned int mSetupPINCode; 
                unsigned short mDiscriminator; 
                struct Spake2pVerifier { 
                    unsigned char mW0[32]; 
                    unsigned char mL[65]; 
                } mPASEVerifier; 
                bool mHasPASEVerifier; 
                struct Optional<chip::ReliableMessageProtocolConfig> { 
                    bool mHasValue; 
                    union Value { 
                        struct ReliableMessageProtocolConfig { 
                            struct duration<unsigned int, std::ratio<1, 1000>> { 
                                unsigned int __rep_; 
                            } mIdleRetransTimeout; 
                            struct duration<unsigned int, std::ratio<1, 1000>> { 
                                unsigned int __rep_; 
                            } mActiveRetransTimeout; 
                        } mData; 
                    } mValue; 
                } mMRPConfig; 
                struct BleLayer {} *mBleLayer; 
                void *mConnectionObject; 
                void *mDiscoveredObject; 
                BOOL mHostName[17]; 
                struct InterfaceId { 
                    unsigned int mPlatformInterface; 
                } mInterfaceId; 
            } mData; 
        } mValue; 
    }  _params;
    NSNumber * _productID;
    NSNumber * _vendorID;
}

@property (nonatomic) bool commissioningMode;
@property (nonatomic, retain) NSNumber *discriminator;
@property (nonatomic, retain) NSString *instanceName;
@property (nonatomic, retain) NSMutableDictionary *interfaces;
@property (nonatomic) struct Optional<chip::Controller::SetUpCodePairerParameters> { bool x1; /* Warning: unhandled union encoding: '(Value={SetUpCodePairerParameters={PeerAddress={IPAddress=[4I]}CS{InterfaceId=I}}IS{Spake2pVerifier=[32C][65C]}B{Optional<chip::ReliableMessageProtocolConfig>=B(Value={ReliableMessageProtocolConfig={duration<unsigned int' */ union x2; } params; /* unknown property attribute:  1000>>=I}})}^{BleLayer}^v^v[17c]{InterfaceId=I}})} */
@property (nonatomic, retain) NSNumber *productID;
@property (nonatomic, retain) NSNumber *vendorID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)commissioningMode;
- (id)discriminator;
- (id)instanceName;
- (id)interfaces;
- (struct Optional<chip::Controller::SetUpCodePairerParameters> { bool x1; union Value { struct SetUpCodePairerParameters { struct PeerAddress { struct IPAddress { unsigned int x_1_4_1[4]; } x_1_3_1; unsigned char x_1_3_2; unsigned short x_1_3_3; struct InterfaceId { unsigned int x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned int x_1_2_2; unsigned short x_1_2_3; struct Spake2pVerifier { unsigned char x_4_3_1[32]; unsigned char x_4_3_2[65]; } x_1_2_4; bool x_1_2_5; struct Optional<chip::ReliableMessageProtocolConfig> { bool x_6_3_1; union Value { struct ReliableMessageProtocolConfig { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int x_1_6_1; } x_1_5_1; struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int x_2_6_1; } x_1_5_2; } x_2_4_1; } x_6_3_2; } x_1_2_6; struct BleLayer {} *x_1_2_7; void *x_1_2_8; void *x_1_2_9; BOOL x_1_2_10[17]; struct InterfaceId { unsigned int x_11_3_1; } x_1_2_11; } x_2_1_1; } x2; })params;
- (id)productID;
- (void)setCommissioningMode:(bool)arg1;
- (void)setDiscriminator:(id)arg1;
- (void)setInstanceName:(id)arg1;
- (void)setInterfaces:(id)arg1;
- (void)setParams:(struct Optional<chip::Controller::SetUpCodePairerParameters> { bool x1; union Value { struct SetUpCodePairerParameters { struct PeerAddress { struct IPAddress { unsigned int x_1_4_1[4]; } x_1_3_1; unsigned char x_1_3_2; unsigned short x_1_3_3; struct InterfaceId { unsigned int x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned int x_1_2_2; unsigned short x_1_2_3; struct Spake2pVerifier { unsigned char x_4_3_1[32]; unsigned char x_4_3_2[65]; } x_1_2_4; bool x_1_2_5; struct Optional<chip::ReliableMessageProtocolConfig> { bool x_6_3_1; union Value { struct ReliableMessageProtocolConfig { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int x_1_6_1; } x_1_5_1; struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int x_2_6_1; } x_1_5_2; } x_2_4_1; } x_6_3_2; } x_1_2_6; struct BleLayer {} *x_1_2_7; void *x_1_2_8; void *x_1_2_9; BOOL x_1_2_10[17]; struct InterfaceId { unsigned int x_11_3_1; } x_1_2_11; } x_2_1_1; } x2; })arg1;
- (void)setProductID:(id)arg1;
- (void)setVendorID:(id)arg1;
- (id)vendorID;

@end
