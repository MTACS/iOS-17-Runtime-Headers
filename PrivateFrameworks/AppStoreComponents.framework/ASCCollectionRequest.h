
@interface ASCCollectionRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clientID;
    NSString * _context;
    NSString * _id;
    NSString * _kind;
    long long  _limit;
}

@property (nonatomic, readonly, copy) NSString *clientID;
@property (nonatomic, readonly, copy) NSString *context;
@property (nonatomic, readonly, copy) NSString *id;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly) long long limit;

+ (id)_requestWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 limit:(long long)arg4 clientID:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_collectionRequestWithClientID:(id)arg1;
- (id)_initWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 limit:(long long)arg4 clientID:(id)arg5;
- (id)clientID;
- (id)collectionRequestWithClientID:(id)arg1;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)id;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 limit:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (long long)limit;

@end
