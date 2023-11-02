
@interface RVQuery : NSObject <NSSecureCoding, RVQueryProtocol> {
    NSString * _identifier;
    long long  _queryID;
    id /* block */  _queryProvider;
    NSString * _title;
    NSString * _userAgent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long queryID;
@property (nonatomic, readonly) id /* block */ queryProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *userAgent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 clientIdentifier:(id)arg2 userAgent:(id)arg3 queryID:(long long)arg4 queryProvider:(id /* block */)arg5;
- (long long)queryID;
- (id /* block */)queryProvider;
- (id)title;
- (id)userAgent;

@end
