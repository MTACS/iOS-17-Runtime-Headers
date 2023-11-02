
@interface WFSmartPromptDialogResponse : WFRequestAuthorizationDialogResponse <NSSecureCoding> {
    NSArray * _promptedStatesData;
}

@property (nonatomic, readonly, copy) NSArray *promptedStatesData;

+ (id)prepareDeletionAuthorizationDatabaseDataFromConfiguration:(id)arg1 resultCode:(unsigned long long)arg2 error:(id*)arg3;
+ (id)prepareSmartPromptsDatabaseDataFromConfiguration:(id)arg1 resultCode:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;
+ (id)updatedStatusFromResultCode:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(unsigned long long)arg1 promptedStatesData:(id)arg2;
- (id)promptedStatesData;

@end
