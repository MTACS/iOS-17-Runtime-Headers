
@interface SALCMShowModalView : SABaseClientBoundCommand

@property (nonatomic, retain) SAAceView *view;

+ (id)showModalView;
+ (id)showModalViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setView:(id)arg1;
- (id)view;

@end
