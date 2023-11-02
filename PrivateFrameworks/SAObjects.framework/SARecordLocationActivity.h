
@interface SARecordLocationActivity : SABaseClientBoundCommand

@property (nonatomic, retain) SALocation *location;
@property (nonatomic, copy) NSString *sourceType;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)location;
- (bool)requiresResponse;
- (void)setLocation:(id)arg1;
- (void)setSourceType:(id)arg1;
- (id)sourceType;

@end
