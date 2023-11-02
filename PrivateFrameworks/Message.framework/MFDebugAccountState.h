
@interface MFDebugAccountState : NSObject {
    NSString * _identifier;
    NSArray * _lastKnownCapabilities;
    MailAccount * _mailAccount;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSArray *lastKnownCapabilities;
@property (nonatomic, retain) MailAccount *mailAccount;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)initWithStateEventDictionary:(id)arg1 identifier:(id)arg2 lastKnownCapabilities:(id)arg3;
- (id)lastKnownCapabilities;
- (id)mailAccount;
- (void)setIdentifier:(id)arg1;
- (void)setLastKnownCapabilities:(id)arg1;
- (void)setMailAccount:(id)arg1;

@end
