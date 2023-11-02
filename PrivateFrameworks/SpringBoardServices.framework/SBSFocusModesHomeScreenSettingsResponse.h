
@interface SBSFocusModesHomeScreenSettingsResponse : NSObject <BSXPCSecureCoding> {
    NSArray * _snapshots;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *snapshots;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithSnapshots:(id)arg1;
- (void)setSnapshots:(id)arg1;
- (id)snapshots;

@end
