
@interface BKEnrollPearlProgressInfo : NSObject {
    NSArray * _enrolledPoses;
    long long  _percentageCompleted;
}

@property (nonatomic, retain) NSArray *enrolledPoses;
@property (nonatomic) long long percentageCompleted;

- (void).cxx_destruct;
- (id)dictionary;
- (id)enrolledPoses;
- (id)initFromDictionary:(id)arg1;
- (id)initFromEnrollInfo:(const struct { unsigned short x1; unsigned short x2; struct { unsigned char x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned short x_3_1_4; unsigned short x_3_1_5; unsigned int x_3_1_6; float x_3_1_7; float x_3_1_8; float x_3_1_9; unsigned int x_3_1_10; } x3; unsigned short x4; unsigned short x5; unsigned char x6[0]; }*)arg1;
- (id)initWithPercents:(long long)arg1;
- (long long)percentageCompleted;
- (void)setEnrolledPoses:(id)arg1;
- (void)setPercentageCompleted:(long long)arg1;

@end
