
@interface MAAutoAssetLockReason : NSObject <NSSecureCoding> {
    NSString * _autoAssetClientName;
    NSString * _lockReason;
}

@property (nonatomic, retain) NSString *autoAssetClientName;
@property (nonatomic, retain) NSString *lockReason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)autoAssetClientName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initForClientName:(id)arg1 forLockReason:(id)arg2;
- (id)initFromClientLockReasonKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lockReason;
- (id)newSummaryDictionary;
- (void)setAutoAssetClientName:(id)arg1;
- (void)setLockReason:(id)arg1;
- (id)summary;

@end
