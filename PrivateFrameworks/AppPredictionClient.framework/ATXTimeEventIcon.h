
@interface ATXTimeEventIcon : NSObject <NSSecureCoding> {
    NSString * _backgroundColorName;
    NSString * _bundleId;
    NSData * _contactImageData;
    NSString * _foregroundColorName;
    NSString * _symbolImageName;
}

@property (nonatomic, readonly, copy) NSString *backgroundColorName;
@property (nonatomic, readonly, copy) NSString *bundleId;
@property (nonatomic, readonly, copy) NSData *contactImageData;
@property (nonatomic, readonly, copy) NSString *foregroundColorName;
@property (nonatomic, readonly, copy) NSString *symbolImageName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColorName;
- (id)bundleId;
- (id)contactImageData;
- (void)encodeWithCoder:(id)arg1;
- (id)foregroundColorName;
- (id)initWithBundleId:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactImageData:(id)arg1;
- (id)initWithSymbolImageName:(id)arg1 backgroundColorName:(id)arg2 foregroundColorName:(id)arg3;
- (id)symbolImageName;

@end
