
@interface MLCLossDescriptor : NSObject <NSCopying> {
    unsigned long long  _classCount;
    float  _delta;
    float  _epsilon;
    float  _labelSmoothing;
    int  _lossType;
    int  _reductionType;
    float  _weight;
}

@property (nonatomic, readonly) unsigned long long classCount;
@property (nonatomic, readonly) float delta;
@property (nonatomic, readonly) float epsilon;
@property (nonatomic, readonly) float labelSmoothing;
@property (nonatomic, readonly) int lossType;
@property (nonatomic, readonly) int reductionType;
@property (nonatomic, readonly) float weight;

+ (id)descriptorWithType:(int)arg1 reductionType:(int)arg2;
+ (id)descriptorWithType:(int)arg1 reductionType:(int)arg2 weight:(float)arg3;
+ (id)descriptorWithType:(int)arg1 reductionType:(int)arg2 weight:(float)arg3 labelSmoothing:(float)arg4 classCount:(unsigned long long)arg5;
+ (id)descriptorWithType:(int)arg1 reductionType:(int)arg2 weight:(float)arg3 labelSmoothing:(float)arg4 classCount:(unsigned long long)arg5 epsilon:(float)arg6 delta:(float)arg7;

- (unsigned long long)classCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)delta;
- (id)description;
- (float)epsilon;
- (unsigned long long)hash;
- (id)initWithLossDescriptorWithType:(int)arg1 reductionType:(int)arg2 weight:(float)arg3;
- (id)initWithLossDescriptorWithType:(int)arg1 reductionType:(int)arg2 weight:(float)arg3 labelSmoothing:(float)arg4 classCount:(unsigned long long)arg5 epsilon:(float)arg6 delta:(float)arg7;
- (bool)isEqual:(id)arg1;
- (float)labelSmoothing;
- (int)lossType;
- (int)reductionType;
- (float)weight;

@end
