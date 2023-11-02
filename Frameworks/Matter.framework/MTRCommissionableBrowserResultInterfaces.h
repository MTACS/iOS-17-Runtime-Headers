
@interface MTRCommissionableBrowserResultInterfaces : NSObject {
    struct Optional<chip::Dnssd::CommonResolutionData> { 
        bool mHasValue; 
        union Value { 
            struct CommonResolutionData { 
                struct InterfaceId { 
                    unsigned int mPlatformInterface; 
                } interfaceId; 
                unsigned long long numIPs; 
                struct IPAddress { 
                    unsigned int Addr[4]; 
                } ipAddress[5]; 
                unsigned short port; 
                BOOL hostName[17]; 
                bool supportsTcp; 
                struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { 
                    bool mHasValue; 
                    union Value { 
                        struct duration<unsigned int, std::ratio<1, 1000>> { 
                            unsigned int __rep_; 
                        } mData; 
                    } mValue; 
                } mrpRetryIntervalIdle; 
                struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { 
                    bool mHasValue; 
                    union Value { 
                        struct duration<unsigned int, std::ratio<1, 1000>> { 
                            unsigned int __rep_; 
                        } mData; 
                    } mValue; 
                } mrpRetryIntervalActive; 
            } mData; 
        } mValue; 
    }  _resolutionData;
}

@property (nonatomic) struct Optional<chip::Dnssd::CommonResolutionData> { bool x1; /* Warning: unhandled union encoding: '(Value={CommonResolutionData={InterfaceId=I}Q[5{IPAddress=[4I]}]S[17c]B{Optional<std::chrono::duration<unsigned int' */ union x2; } resolutionData; /* unknown property attribute:  1000>>=I})}})} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Optional<chip::Dnssd::CommonResolutionData> { bool x1; union Value { struct CommonResolutionData { struct InterfaceId { unsigned int x_1_3_1; } x_1_2_1; unsigned long long x_1_2_2; struct IPAddress { unsigned int x_3_3_1[4]; } x_1_2_3[5]; unsigned short x_1_2_4; BOOL x_1_2_5[17]; bool x_1_2_6; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { bool x_7_3_1; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int x_1_5_1; } x_2_4_1; } x_7_3_2; } x_1_2_7; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { bool x_8_3_1; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int x_1_5_1; } x_2_4_1; } x_8_3_2; } x_1_2_8; } x_2_1_1; } x2; })resolutionData;
- (void)setResolutionData:(struct Optional<chip::Dnssd::CommonResolutionData> { bool x1; union Value { struct CommonResolutionData { struct InterfaceId { unsigned int x_1_3_1; } x_1_2_1; unsigned long long x_1_2_2; struct IPAddress { unsigned int x_3_3_1[4]; } x_1_2_3[5]; unsigned short x_1_2_4; BOOL x_1_2_5[17]; bool x_1_2_6; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { bool x_7_3_1; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int x_1_5_1; } x_2_4_1; } x_7_3_2; } x_1_2_7; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { bool x_8_3_1; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int x_1_5_1; } x_2_4_1; } x_8_3_2; } x_1_2_8; } x_2_1_1; } x2; })arg1;

@end
