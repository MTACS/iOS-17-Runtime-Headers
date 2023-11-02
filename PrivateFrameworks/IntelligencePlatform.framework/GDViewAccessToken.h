
@interface GDViewAccessToken : NSObject <NSSecureCoding> {
    NSString * _tableName;
    NSData * _token;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *tableName;
@property (nonatomic, readonly) NSData *token;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1 url:(id)arg2 tableName:(id)arg3;
- (id)tableName;
- (id)token;
- (id)url;

@end
