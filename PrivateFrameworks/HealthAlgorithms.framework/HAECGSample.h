
@interface HAECGSample : NSObject {
    NSArray * _ecgData;
    unsigned long long  _flags;
    float  _frequency;
    NSString * _sessionIdentifier;
    NSDate * _timestamp;
}

@property (nonatomic, readonly, copy) NSArray *ecgData;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) float frequency;
@property (nonatomic, readonly) NSString *sessionIdentifier;
@property (nonatomic, readonly) NSDate *timestamp;

- (void).cxx_destruct;
- (id)decodeHALV1Payload:(const struct { unsigned char x1; unsigned short x2; unsigned char x3; unsigned char x4; unsigned int x5; unsigned long long x6; struct { unsigned int x_7_1_1; unsigned char x_7_1_2; unsigned char x_7_1_3; } x7; struct { unsigned short x_8_1_1; unsigned short x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; short x_8_1_5; int x_8_1_6; } x8[16]; }*)arg1 withMetadata:(id)arg2;
- (id)decodeHALV2Payload:(const struct { unsigned char x1; unsigned short x2; unsigned char x3; unsigned char x4; unsigned int x5; unsigned long long x6; struct { unsigned int x_7_1_1; unsigned int x_7_1_2; unsigned char x_7_1_3; unsigned char x_7_1_4; int x_7_1_5; int x_7_1_6; unsigned char x_7_1_7; unsigned char x_7_1_8; } x7; struct { unsigned short x_8_1_1; unsigned short x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; short x_8_1_5; short x_8_1_6; int x_8_1_7; int x_8_1_8; int x_8_1_9; } x8[16]; }*)arg1 withMetadata:(id)arg2 withPayloadVersion2:(bool)arg3;
- (id)ecgData;
- (unsigned long long)flags;
- (float)frequency;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (bool)parseRepresentation:(id)arg1 withMetadata:(id)arg2;
- (id)sessionIdentifier;
- (void)setTimestampWithRtpTicks:(unsigned long long)arg1 withMetadata:(id)arg2;
- (id)timestamp;

@end
