
@interface GEORequestCounterProactiveTileDownloadInfo : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSArray * _policies;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *policies;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 policies:(id)arg2;
- (id)policies;

@end
