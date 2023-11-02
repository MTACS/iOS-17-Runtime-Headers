
@interface ISSoftwareCapabilitiesDialogOperation : ISOperation {
    NSDictionary * _mismatches;
    id  _requiredCapabilities;
}

@property (readonly) NSDictionary *mismatches;
@property (readonly) id requiredCapabilities;

- (void)_postDefaultDialog;
- (void)dealloc;
- (id)initWithRequiredCapabilities:(id)arg1 mismatches:(id)arg2;
- (id)mismatches;
- (id)requiredCapabilities;
- (void)run;

@end
