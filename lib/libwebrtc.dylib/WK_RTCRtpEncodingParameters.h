
@interface WK_RTCRtpEncodingParameters : NSObject {
    bool  _isActive;
    NSNumber * _maxBitrateBps;
    NSNumber * _maxFramerate;
    NSNumber * _minBitrateBps;
    long long  _networkPriority;
    NSNumber * _numTemporalLayers;
    NSString * _rid;
    NSNumber * _scaleResolutionDownBy;
    NSNumber * _ssrc;
}

@property (nonatomic) bool isActive;
@property (nonatomic, copy) NSNumber *maxBitrateBps;
@property (nonatomic, copy) NSNumber *maxFramerate;
@property (nonatomic, copy) NSNumber *minBitrateBps;
@property (nonatomic, readonly) struct RtpEncodingParameters { struct optional<unsigned int> { bool x_1_1_1; union { unsigned int x_2_2_1; struct dummy_type { struct empty_struct { } x_2_3_1[4]; } x_2_2_2; } x_1_1_2; } x1; double x2; int x3; struct optional<int> { bool x_4_1_1; union { int x_2_2_1; struct dummy_type { struct empty_struct { } x_2_3_1[4]; } x_2_2_2; } x_4_1_2; } x4; struct optional<int> { bool x_5_1_1; union { int x_2_2_1; struct dummy_type { struct empty_struct { } x_2_3_1[4]; } x_2_2_2; } x_5_1_2; } x5; struct optional<double> { bool x_6_1_1; union { double x_2_2_1; struct dummy_type { struct empty_struct { } x_2_3_1[8]; } x_2_2_2; } x_6_1_2; } x6; struct optional<int> { bool x_7_1_1; union { int x_2_2_1; struct dummy_type { struct empty_struct { } x_2_3_1[4]; } x_2_2_2; } x_7_1_2; } x7; struct optional<double> { bool x_8_1_1; union { double x_2_2_1; struct dummy_type { struct empty_struct { } x_2_3_1[8]; } x_2_2_2; } x_8_1_2; } x8; /* Warning: unhandled struct encoding: '{optional<std::string>=B(?={basic_string<char' */ struct x9; } nativeParameters; /* unknown property attribute:  std::allocator<char>>={__rep=(?={__long=*Qb63b1}{__short=[23c][0C]b7b1}{__raw=[3Q]})}}}B} */
@property (nonatomic) long long networkPriority;
@property (nonatomic, copy) NSNumber *numTemporalLayers;
@property (nonatomic, copy) NSString *rid;
@property (nonatomic, copy) NSNumber *scaleResolutionDownBy;
@property (nonatomic, readonly) NSNumber *ssrc;

+ (int)nativePriorityFromPriority:(long long)arg1;
+ (long long)priorityFromNativePriority:(int)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithNativeParameters:(const void*)arg1;
- (bool)isActive;
- (id)maxBitrateBps;
- (id)maxFramerate;
- (id)minBitrateBps;
- (struct RtpEncodingParameters { struct optional<unsigned int> { bool x_1_1_1; union { unsigned int x_2_2_1; struct dummy_type { struct empty_struct { } x_2_3_1[4]; } x_2_2_2; } x_1_1_2; } x1; double x2; int x3; struct optional<int> { bool x_4_1_1; union { int x_2_2_1; struct dummy_type { struct empty_struct { } x_2_3_1[4]; } x_2_2_2; } x_4_1_2; } x4; struct optional<int> { bool x_5_1_1; union { int x_2_2_1; struct dummy_type { struct empty_struct { } x_2_3_1[4]; } x_2_2_2; } x_5_1_2; } x5; struct optional<double> { bool x_6_1_1; union { double x_2_2_1; struct dummy_type { struct empty_struct { } x_2_3_1[8]; } x_2_2_2; } x_6_1_2; } x6; struct optional<int> { bool x_7_1_1; union { int x_2_2_1; struct dummy_type { struct empty_struct { } x_2_3_1[4]; } x_2_2_2; } x_7_1_2; } x7; struct optional<double> { bool x_8_1_1; union { double x_2_2_1; struct dummy_type { struct empty_struct { } x_2_3_1[8]; } x_2_2_2; } x_8_1_2; } x8; struct optional<std::string> { bool x_9_1_1; union { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_7_1; unsigned long long x_1_7_2; unsigned int x_1_7_3 : 63; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __short { BOOL x_2_7_1[23]; unsigned char x_2_7_2[0]; unsigned int x_2_7_3 : 7; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_1_3_1; } x_2_2_1; struct dummy_type { struct empty_struct { } x_2_3_1[24]; } x_2_2_2; } x_9_1_2; } x9; })nativeParameters;
- (long long)networkPriority;
- (id)numTemporalLayers;
- (id)rid;
- (id)scaleResolutionDownBy;
- (void)setIsActive:(bool)arg1;
- (void)setMaxBitrateBps:(id)arg1;
- (void)setMaxFramerate:(id)arg1;
- (void)setMinBitrateBps:(id)arg1;
- (void)setNetworkPriority:(long long)arg1;
- (void)setNumTemporalLayers:(id)arg1;
- (void)setRid:(id)arg1;
- (void)setScaleResolutionDownBy:(id)arg1;
- (id)ssrc;

@end
