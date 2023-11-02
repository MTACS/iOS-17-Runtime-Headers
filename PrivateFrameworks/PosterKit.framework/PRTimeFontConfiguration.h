
@interface PRTimeFontConfiguration : NSObject <NSCopying> {
    UIFont * _customFont;
    NSString * _timeFontIdentifier;
    double  _weight;
}

@property (nonatomic, readonly, copy) UIFont *customFont;
@property (nonatomic, readonly) UIFont *effectiveFont;
@property (nonatomic, readonly, copy) NSString *timeFontIdentifier;
@property (nonatomic, readonly) double weight;

- (void).cxx_destruct;
- (double)_defaultWeightForTimeFontIdentifier:(id)arg1;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customFont;
- (id)description;
- (id)effectiveFont;
- (id)effectiveFontForRole:(id)arg1;
- (id)effectiveFontForRole:(id)arg1 ignoringWeight:(bool)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCustomFont:(id)arg1;
- (id)initWithTimeFontIdentifier:(id)arg1;
- (id)initWithTimeFontIdentifier:(id)arg1 weight:(double)arg2;
- (bool)isEqual:(id)arg1;
- (id)timeFontIdentifier;
- (double)weight;

@end
