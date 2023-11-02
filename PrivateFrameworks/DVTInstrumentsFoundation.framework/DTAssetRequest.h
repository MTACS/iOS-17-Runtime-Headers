
@interface DTAssetRequest : NSObject <NSSecureCoding> {
    NSString * _assetPath;
    NSString * _identifier;
}

@property (nonatomic, readonly) NSString *assetPath;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) DTXMessage *message;

+ (id)requestWithIdentifier:(id)arg1 path:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetPath;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 path:(id)arg2;
- (id)message;

@end
