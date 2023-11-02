
@interface VCIntentDefinitionChange : NSObject <VCSYChange> {
    long long  _changeType;
    NSString * _checksum;
    NSArray * _files;
    NSString * _objectIdentifier;
}

@property (nonatomic) long long changeType;
@property (nonatomic, readonly, copy) NSString *checksum;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *files;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (readonly) Class superclass;

+ (int)messageType;

- (void).cxx_destruct;
- (long long)changeType;
- (id)checksum;
- (id)description;
- (id)files;
- (id)initWithApplicationRecord:(id)arg1 changeType:(long long)arg2;
- (id)initWithObjectIdentifier:(id)arg1 changeType:(long long)arg2;
- (id)objectIdentifier;
- (bool)readFrom:(id)arg1 error:(id*)arg2;
- (id)sequencer;
- (void)setChangeType:(long long)arg1;
- (void)setFiles:(id)arg1;
- (bool)writeTo:(id)arg1 error:(id*)arg2;

@end
