
@interface REMReplicaIDSource : NSObject <NSCopying, NSSecureCoding> {
    REMObjectID * _accountID;
    NSString * _crdtID;
}

@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) NSString *crdtID;

+ (id)crdtIDWithObjectID:(id)arg1 property:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crdtID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccountID:(id)arg1 crdtID:(id)arg2;
- (id)initWithAccountID:(id)arg1 objectID:(id)arg2 property:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
