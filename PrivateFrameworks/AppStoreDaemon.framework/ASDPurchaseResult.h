
@interface ASDPurchaseResult : NSObject <NSCopying, NSSecureCoding> {
    NSError * _error;
    NSNumber * _itemID;
    bool  _success;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool success;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccess:(bool)arg1 error:(id)arg2;
- (bool)success;

@end
