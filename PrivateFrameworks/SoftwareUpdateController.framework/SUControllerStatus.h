
@interface SUControllerStatus : NSObject <NSSecureCoding> {
    bool  _failForwardMode;
    long long  _managerState;
    long long  _updateState;
}

@property (nonatomic) bool failForwardMode;
@property (nonatomic) long long managerState;
@property (nonatomic) long long updateState;

+ (bool)supportsSecureCoding;

- (id)copy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)failForwardMode;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)managerState;
- (void)setFailForwardMode:(bool)arg1;
- (void)setManagerState:(long long)arg1;
- (void)setUpdateState:(long long)arg1;
- (id)summary;
- (long long)updateState;

@end
