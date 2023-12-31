
@interface IMMockItemInfo : NSObject <NSSecureCoding> {
    bool  _outgoing;
    long long  _type;
}

@property (nonatomic, readonly) bool outgoing;
@property (nonatomic, readonly) long long type;

+ (id)decodedMockItemInfoArray:(id)arg1;
+ (id)defaultMockInfoArray;
+ (id)encodedMockItemInfoArray:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMockItemType:(long long)arg1 outgoing:(bool)arg2;
- (bool)outgoing;
- (long long)type;

@end
