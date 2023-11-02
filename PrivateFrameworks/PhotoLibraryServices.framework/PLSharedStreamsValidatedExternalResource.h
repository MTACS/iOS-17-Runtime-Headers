
@interface PLSharedStreamsValidatedExternalResource : PLValidatedExternalResource {
    NSString * _fingerprint;
    unsigned int  _sharedStreamsType;
}

@property (nonatomic, retain) NSString *fingerprint;
@property (nonatomic) unsigned int sharedStreamsType;

- (void).cxx_destruct;
- (id)description;
- (id)fingerprint;
- (void)setFingerprint:(id)arg1;
- (void)setSharedStreamsType:(unsigned int)arg1;
- (unsigned int)sharedStreamsType;

@end
