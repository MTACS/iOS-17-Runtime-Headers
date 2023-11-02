
@interface UIKBMergeAction : NSObject <NSCopying> {
    NSString * _disappearingKeyName;
    UIKBGeometry * _factors;
    NSArray * _orderedKeyList;
    NSString * _remainingKeyName;
}

@property (nonatomic, retain) NSString *disappearingKeyName;
@property (nonatomic, retain) UIKBGeometry *factors;
@property (nonatomic, retain) NSArray *orderedKeyList;
@property (nonatomic, retain) NSString *remainingKeyName;

+ (id)mergeActionWithOrderedKeyList:(id)arg1 factors:(id)arg2;
+ (id)mergeActionWithRemainingKeyName:(id)arg1 disappearingKeyName:(id)arg2 factors:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)disappearingKeyName;
- (id)factors;
- (id)orderedKeyList;
- (id)remainingKeyName;
- (void)setDisappearingKeyName:(id)arg1;
- (void)setFactors:(id)arg1;
- (void)setOrderedKeyList:(id)arg1;
- (void)setRemainingKeyName:(id)arg1;

@end
