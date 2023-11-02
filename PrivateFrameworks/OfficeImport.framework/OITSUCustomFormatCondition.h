
@interface OITSUCustomFormatCondition : NSObject <NSCopying> {
    int  _conditionType;
    double  _conditionValue;
    OITSUCustomFormatData * _data;
}

@property (nonatomic, readonly) int conditionType;
@property (nonatomic, readonly) double conditionValue;
@property (nonatomic, readonly) OITSUCustomFormatData *data;

- (void).cxx_destruct;
- (int)conditionType;
- (double)conditionValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(int)arg1 value:(double)arg2 data:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
