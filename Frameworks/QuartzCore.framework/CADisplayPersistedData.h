
@interface CADisplayPersistedData : NSObject <NSSecureCoding> {
    NSMutableArray * _latencies;
    NSMutableArray * _preferredModes;
    NSString * _version;
}

@property (nonatomic, retain) NSMutableArray *latencies;
@property (nonatomic, retain) NSMutableArray *preferredModes;
@property (nonatomic, copy) NSString *version;

+ (id)sharedInstance;
+ (id)supportedClasses;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)latencies;
- (double)latencyForUUID:(id)arg1 andMode:(struct Mode { union { struct { unsigned int x_1_2_1 : 14; unsigned int x_1_2_2 : 14; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 25; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 5; unsigned int x_1_2_7 : 2; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; })arg2;
- (struct Mode { union { struct { unsigned int x_1_2_1 : 14; unsigned int x_1_2_2 : 14; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 25; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 5; unsigned int x_1_2_7 : 2; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; })preferredModeForUUID:(id)arg1;
- (id)preferredModes;
- (void)save;
- (void)setLatencies:(id)arg1;
- (void)setLatency:(double)arg1 forUUID:(id)arg2 andMode:(struct Mode { union { struct { unsigned int x_1_2_1 : 14; unsigned int x_1_2_2 : 14; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 25; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 5; unsigned int x_1_2_7 : 2; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; })arg3;
- (void)setPreferredMode:(struct Mode { union { struct { unsigned int x_1_2_1 : 14; unsigned int x_1_2_2 : 14; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 25; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 5; unsigned int x_1_2_7 : 2; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; })arg1 forUUID:(id)arg2;
- (void)setPreferredModes:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)update;
- (id)version;

@end
