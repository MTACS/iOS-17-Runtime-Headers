
@interface VSAccountsArchive : NSObject <NSSecureCoding> {
    NSArray * _accounts;
    VSAccountChannels * _channels;
}

@property (nonatomic, copy) NSArray *accounts;
@property (nonatomic, copy) VSAccountChannels *channels;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accounts;
- (id)channels;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAccounts:(id)arg1;
- (void)setChannels:(id)arg1;

@end
