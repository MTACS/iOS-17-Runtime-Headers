
@interface IKJSAccountInfo : VUIJSObject <VUIJSAccountInfoInterface>

@property (nonatomic, readonly) NSString *DSID;
@property (nonatomic, readonly) NSString *appleId;
@property (nonatomic, readonly) NSString *storefrontId;

- (id)DSID;
- (id)appleId;
- (id)initWithAppContext:(id)arg1;
- (id)storefrontId;

@end
