
@interface EMListUnsubscribeCommand : NSObject <EFPubliclyDescribable, NSSecureCoding> {
    long long  _headerUnsubscribeTypes;
    NSString * _listID;
    EMListUnsubscribeMailtoValues * _mailtoValues;
    EMListUnsubscribePostValues * _postValues;
    NSString * _sender;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long headerUnsubscribeTypes;
@property (nonatomic, readonly) bool isMailtoOperation;
@property (nonatomic, readonly) NSString *listID;
@property (nonatomic, readonly) EMListUnsubscribeMailtoValues *mailtoValues;
@property (nonatomic, readonly) EMListUnsubscribePostValues *postValues;
@property (nonatomic, readonly) NSString *sender;
@property (readonly) Class superclass;

+ (id)_accountWithIdentifier:(id)arg1;
+ (id /* block */)accountFinderBlock;
+ (id)mailtoUnsubscribeCommandWithListID:(id)arg1 address:(id)arg2 sender:(id)arg3 subject:(id)arg4 body:(id)arg5 account:(id)arg6 headerUnsubscribeTypes:(long long)arg7;
+ (id)oneClickUnsubscribeCommandWithListID:(id)arg1 sender:(id)arg2 URL:(id)arg3 postContent:(id)arg4 headerUnsubscribeTypes:(long long)arg5;
+ (void)setAccountFinderBlock:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)headerUnsubscribeTypes;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithListID:(id)arg1 sender:(id)arg2 mailtoValues:(id)arg3 postValues:(id)arg4 headerUnsubscribeTypes:(long long)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isMailtoOperation;
- (id)listID;
- (id)mailtoValues;
- (id)postValues;
- (id)sender;

@end
