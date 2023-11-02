
@interface JUWritingDirectionsCounts : NSObject {
    void hasStronglyTypedCounts;
    void isRTLEnough;
    void isRTLMinimal;
    void leftToRight;
    void natural;
    void rightToLeft;
    void significantValues;
    void total;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool hasStronglyTypedCounts;
@property (nonatomic, readonly) bool isRTLEnough;
@property (nonatomic, readonly) bool isRTLMinimal;
@property (nonatomic, readonly) unsigned long long leftToRight;
@property (nonatomic, readonly) unsigned long long natural;
@property (nonatomic, readonly) unsigned long long rightToLeft;
@property (nonatomic, readonly) unsigned long long significantValues;
@property (nonatomic, readonly) unsigned long long total;

+ (id)add:(id)arg1 to:(id)arg2;
+ (id)zero;

- (void).cxx_destruct;
- (id)description;
- (bool)hasStronglyTypedCounts;
- (id)init;
- (id)initWithNatural:(unsigned long long)arg1 leftToRight:(unsigned long long)arg2 rightToLeft:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isRTLEnough;
- (bool)isRTLMinimal;
- (unsigned long long)leftToRight;
- (unsigned long long)natural;
- (unsigned long long)rightToLeft;
- (unsigned long long)significantValues;
- (unsigned long long)total;

@end
