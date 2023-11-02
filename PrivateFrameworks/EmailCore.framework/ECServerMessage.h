
@interface ECServerMessage : NSObject <ECIMAPServerMessageBuilder, ECServerMessageBuilder, NSCopying> {
    NSNumber * _imapUID;
    NSSet * _labels;
    NSString * _messagePersistentID;
    NSString * _persistentID;
    NSString * _remoteID;
    ECMessageFlags * _serverFlags;
}

@property (nonatomic, readonly) unsigned int imapUID;
@property (nonatomic, copy) NSSet *labels;
@property (nonatomic, retain) NSString *messagePersistentID;
@property (nonatomic, retain) NSString *persistentID;
@property (nonatomic, copy) NSString *remoteID;
@property (nonatomic, readonly) id remoteIDObject;
@property (nonatomic, retain) ECMessageFlags *serverFlags;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (unsigned int)imapUID;
- (id)init;
- (id)initWithIMAPServerMessageBuilder:(id /* block */)arg1;
- (id)initWithServerMessageBuilder:(id /* block */)arg1;
- (bool)isEqual:(id)arg1;
- (id)labels;
- (id)messagePersistentID;
- (id)persistentID;
- (id)remoteID;
- (id)remoteIDObject;
- (id)serverFlags;
- (void)setImapUID:(unsigned int)arg1;
- (void)setLabels:(id)arg1;
- (void)setMessagePersistentID:(id)arg1;
- (void)setPersistentID:(id)arg1;
- (void)setRemoteID:(id)arg1;
- (void)setServerFlags:(id)arg1;

@end
