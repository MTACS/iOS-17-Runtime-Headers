
@interface CAMCTMCancelMomentCaptureCommand : CAMCaptureCommand {
    NSString * __persistenceUUID;
}

@property (nonatomic, readonly) NSString *_persistenceUUID;

- (void).cxx_destruct;
- (id)_persistenceUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistenceUUID:(id)arg1;

@end
