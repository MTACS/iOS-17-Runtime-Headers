
@interface TIInputModeLocaleIdentifierOverrideMapping : NSObject {
    NSDictionary * _overrideMapping;
}

@property (nonatomic, readonly) NSDictionary *overrideMapping;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned char)localeIdentifierHasOverride:(id)arg1;
- (id)overrideLocaleForIdentifier:(id)arg1;
- (id)overrideMapping;

@end
