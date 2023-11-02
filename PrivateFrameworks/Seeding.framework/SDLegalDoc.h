
@interface SDLegalDoc : NSObject <NSSecureCoding> {
    NSString * _content;
    long long  _legal_id;
    NSString * _title;
}

@property (copy) NSString *content;
@property long long legal_id;
@property (copy) NSString *title;

+ (id)legalDocWithID:(long long)arg1 title:(id)arg2 content:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)content;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(long long)arg1 title:(id)arg2 content:(id)arg3;
- (long long)legal_id;
- (void)setContent:(id)arg1;
- (void)setLegal_id:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
