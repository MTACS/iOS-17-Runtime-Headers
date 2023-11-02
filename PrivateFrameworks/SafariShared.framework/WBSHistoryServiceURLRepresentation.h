
@interface WBSHistoryServiceURLRepresentation : NSObject <NSCopying, NSSecureCoding> {
    NSData * _urlHash;
    NSData * _urlSalt;
    NSString * _urlString;
}

@property (nonatomic, readonly, copy) NSData *urlHash;
@property (nonatomic, readonly, copy) NSData *urlSalt;
@property (nonatomic, readonly, copy) NSString *urlString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURLHash:(id)arg1 salt:(id)arg2;
- (id)initWithURLString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)urlHash;
- (id)urlSalt;
- (id)urlString;

@end
