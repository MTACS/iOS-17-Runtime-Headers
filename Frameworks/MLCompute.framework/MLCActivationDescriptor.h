
@interface MLCActivationDescriptor : NSObject <NSCopying> {
    float  _a;
    int  _activationType;
    float  _b;
    float  _c;
}

@property (nonatomic, readonly) float a;
@property (nonatomic, readonly) int activationType;
@property (nonatomic, readonly) float b;
@property (nonatomic, readonly) float c;

+ (void)defaultParametersForType:(int)arg1;
+ (id)descriptorWithType:(int)arg1;
+ (id)descriptorWithType:(int)arg1 a:(float)arg2;
+ (id)descriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3;
+ (id)descriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4;

- (float)a;
- (int)activationType;
- (float)b;
- (float)c;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4;
- (bool)isEqual:(id)arg1;

@end
