
@interface WFEntityPickerDialogResponse : WFDialogResponse <BSXPCSecureCoding, NSSecureCoding> {
    WFConcreteRunnableEntry * _selectedEntry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFConcreteRunnableEntry *selectedEntry;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool userRequestedAllOptions;
@property (nonatomic, readonly) bool userRequestedOpenApp;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSelectedEntry:(id)arg1;
- (id)selectedEntry;
- (bool)userRequestedAllOptions;
- (bool)userRequestedOpenApp;

@end
