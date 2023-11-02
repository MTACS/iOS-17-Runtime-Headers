
@interface CALNDefaultIconIdentifierVersionProvider : NSObject <CALNIconIdentifierVersionProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long iconIdentifierVersion;
@property (nonatomic, readonly) long long iconVersionToUpgradeTo;
@property (readonly) Class superclass;

- (long long)iconIdentifierVersion;
- (long long)iconVersionToUpgradeTo;
- (void)setIconIdentifierVersion:(long long)arg1;

@end
