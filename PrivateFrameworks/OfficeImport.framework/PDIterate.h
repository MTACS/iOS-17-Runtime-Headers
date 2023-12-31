
@interface PDIterate : NSObject {
    bool  mIsBackwards;
    bool  mIsPercentage;
    int  mType;
    double  mValue;
}

- (unsigned long long)hash;
- (bool)isBackwards;
- (bool)isEqual:(id)arg1;
- (bool)isValuePercentage;
- (void)setIsBackwards:(bool)arg1;
- (void)setIsValuePercentage:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(double)arg1;
- (int)type;
- (double)value;

@end
