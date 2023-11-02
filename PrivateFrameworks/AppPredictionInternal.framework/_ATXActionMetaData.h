
@interface _ATXActionMetaData : NSObject <NSSecureCoding> {
    NSString * _actionKey;
    bool  _shouldPredict;
    bool  _shouldPredictLockScreen;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *actionKey;
@property (nonatomic, readonly) bool shouldPredict;
@property (nonatomic, readonly) bool shouldPredictLockScreen;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionKey;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 shouldPredict:(bool)arg3 shouldPredictLockScreen:(bool)arg4 actionKey:(id)arg5;
- (bool)shouldPredict;
- (bool)shouldPredictLockScreen;
- (id)subtitle;
- (id)title;

@end
