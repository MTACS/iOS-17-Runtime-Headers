
@interface NSProgressValues : NSObject <NSSecureCoding> {
    struct _NSProgressFraction { 
        long long completed; 
        long long total; 
        bool overflowed; 
    }  _childFraction;
    bool  _isCancellable;
    bool  _isCancelled;
    bool  _isPausable;
    bool  _isPaused;
    bool  _isPrioritizable;
    NSString * _kind;
    NSString * _localizedAdditionalDescription;
    NSString * _localizedDescription;
    long long  _portionOfParent;
    double  _remoteFractionCompleted;
    struct _NSProgressFraction { 
        long long completed; 
        long long total; 
        bool overflowed; 
    }  _selfFraction;
    NSMutableDictionary * _userInfo;
    bool  _usingChildUserInfo;
}

+ (id)_importantKeys;
+ (id)decodableClasses;
+ (bool)supportsSecureCoding;

- (id)_indentedDescription:(unsigned long long)arg1;
- (long long)completedUnitCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)fractionCompleted;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isFinished;
- (bool)isIndeterminate;
- (struct _NSProgressFraction { long long x1; long long x2; bool x3; })overallFraction;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setFinished:(bool)arg1;
- (void)setFractionCompleted:(double)arg1;
- (void)setIndeterminate:(bool)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (long long)totalUnitCount;

@end