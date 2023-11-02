
@interface CNContactLocationVCardSummary : NSObject <NSCopying, NSSecureCoding> {
    NSString * _title;
    NSString * _urlString;
}

@property (nonatomic, readonly, copy) NSString *descriptiveLabel;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *urlString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptiveLabel;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithTitle:(id)arg1 URLString:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)title;
- (id)urlString;

@end
