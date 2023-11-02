
@interface SAUIUpdateVisualResponseSnippet : SABaseClientBoundCommand

@property (nonatomic, copy) NSData *stateData;
@property (nonatomic, copy) NSString *viewId;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setStateData:(id)arg1;
- (void)setViewId:(id)arg1;
- (id)stateData;
- (id)viewId;

@end
