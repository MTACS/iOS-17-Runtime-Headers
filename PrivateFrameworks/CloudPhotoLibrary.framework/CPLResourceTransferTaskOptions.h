
@interface CPLResourceTransferTaskOptions : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _intent;
    unsigned long long  _priority;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
}

@property (nonatomic, readonly) unsigned long long intent;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (id)defaultOptions;
+ (id)descriptionForIntent:(unsigned long long)arg1;
+ (id)descriptionForIntentPriority:(unsigned long long)arg1;
+ (id)intentsToBackgroundDownload;
+ (bool)isForegroundOperationForIntent:(unsigned long long)arg1 priority:(unsigned long long)arg2;
+ (bool)isHighPriorityForIntent:(unsigned long long)arg1 priority:(unsigned long long)arg2;
+ (id)optionsForLegacyIntent:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidTimeRange;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHighPriority:(bool)arg1;
- (id)initWithIntent:(unsigned long long)arg1 priority:(unsigned long long)arg2;
- (id)initWithIntent:(unsigned long long)arg1 priority:(unsigned long long)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (unsigned long long)intent;
- (bool)isForeground;
- (bool)isHighPriority;
- (unsigned long long)legacyIntent;
- (unsigned long long)priority;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)shouldKeepPower;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
