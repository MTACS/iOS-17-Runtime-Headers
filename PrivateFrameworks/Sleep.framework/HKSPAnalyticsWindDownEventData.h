
@interface HKSPAnalyticsWindDownEventData : NSObject <NSCoding, NSSecureCoding> {
    unsigned long long  _action;
    NSString * _identifier;
    bool  _wasCollected;
    bool  _wasUsed;
}

@property (nonatomic, readonly) unsigned long long action;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool wasCollected;
@property (nonatomic, readonly) bool wasUsed;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)action;
- (id)collectedEventDataCopy;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindDownAction:(unsigned long long)arg1 wasUsed:(bool)arg2 identifier:(id)arg3;
- (id)initWithWindDownAction:(unsigned long long)arg1 wasUsed:(bool)arg2 identifier:(id)arg3 wasCollected:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualEventData:(id)arg1;
- (bool)wasCollected;
- (bool)wasUsed;

@end
