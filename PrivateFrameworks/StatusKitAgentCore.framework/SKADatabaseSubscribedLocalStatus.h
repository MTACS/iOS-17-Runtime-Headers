
@interface SKADatabaseSubscribedLocalStatus : NSObject {
    NSDate * _creationDate;
    NSString * _identifier;
    NSString * _idsIdentifier;
    NSString * _keyDomain;
    NSString * _keyName;
    NSDate * _modificationDate;
    NSData * _payload;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *idsIdentifier;
@property (nonatomic, retain) NSString *keyDomain;
@property (nonatomic, retain) NSString *keyName;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, retain) NSData *payload;

- (void).cxx_destruct;
- (id)creationDate;
- (id)description;
- (id)identifier;
- (id)idsIdentifier;
- (id)initWithCoreDataSubscirbedLocalStatus:(id)arg1;
- (id)initWithIdentifier:(id)arg1 creationDate:(id)arg2 modificationDate:(id)arg3 keyName:(id)arg4 keyDomain:(id)arg5 payload:(id)arg6 idsIdentifier:(id)arg7;
- (id)keyDomain;
- (id)keyName;
- (id)modificationDate;
- (id)payload;
- (void)setCreationDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setKeyDomain:(id)arg1;
- (void)setKeyName:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setPayload:(id)arg1;

@end
