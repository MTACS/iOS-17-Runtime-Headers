
@interface PBUIColorStatistics : NSObject <NSCopying, NSSecureCoding> {
    UIColor * _averageColor;
    double  _averageContrast;
    <PBUIColorStatisticsDelegate> * _delegate;
    _UILegibilitySettingsProvider * _legibilityProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAverageColor:(id)arg1;
- (id)initWithAverageColor:(id)arg1 contrast:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)isSimilarToColorStatistics:(id)arg1;

@end
