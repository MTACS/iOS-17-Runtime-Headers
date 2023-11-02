
@interface CastleEmailAliasUpdateResult : NSObject {
    bool  _accountNeedsToUpdateProperties;
    NSString * _defaultEmailAddress;
    NSDictionary * _emailAddresses;
    NSString * _entityTag;
    bool  _isSuccess;
    bool  _notModified;
    NSDictionary * _receiveEmailAliasAddresses;
}

@property (nonatomic, readonly) bool accountNeedsToUpdateProperties;
@property (nonatomic, readonly) NSString *defaultEmailAddress;
@property (nonatomic, readonly) NSDictionary *emailAddresses;
@property (nonatomic, readonly) NSString *entityTag;
@property (nonatomic, readonly) bool isSuccess;
@property (nonatomic, readonly) bool notModified;
@property (nonatomic, readonly) NSDictionary *receiveEmailAliasAddresses;

- (void).cxx_destruct;
- (bool)accountNeedsToUpdateProperties;
- (id)defaultEmailAddress;
- (id)emailAddresses;
- (id)entityTag;
- (id)init;
- (id)initWithReceiveEmailAliasAddresses:(id)arg1 emailAddresses:(id)arg2 defaultEmailAddress:(id)arg3 entityTag:(id)arg4 isSuccess:(bool)arg5 notModified:(bool)arg6 accountNeedsToUpdateProperties:(bool)arg7;
- (bool)isSuccess;
- (bool)notModified;
- (id)receiveEmailAliasAddresses;

@end
