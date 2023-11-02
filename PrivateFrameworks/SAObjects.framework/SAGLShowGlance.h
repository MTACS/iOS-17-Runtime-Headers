
@interface SAGLShowGlance : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *bundleId;

+ (id)showGlance;
+ (id)showGlanceWithDictionary:(id)arg1 context:(id)arg2;

- (id)bundleId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setBundleId:(id)arg1;

@end
