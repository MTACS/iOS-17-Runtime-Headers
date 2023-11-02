
@interface PUPhotoPickerRemoteViewControllerRequestOptions : NSObject <NSSecureCoding> {
    bool  _onboardingHeaderDismissedBefore;
    NSDictionary * _photoPickerProperties;
    NSString * _requestedClassName;
    NSUUID * _requestedIdentifier;
}

@property (nonatomic, readonly) bool allowsMultipleSelection;
@property (nonatomic, readonly) bool convertAutoloopsToGIF;
@property (nonatomic, readonly) NSArray *mediaTypes;
@property (nonatomic, readonly) long long modalPresentationStyle;
@property (nonatomic, readonly) unsigned long long multipleSelectionLimit;
@property (nonatomic, readonly) bool onboardingHeaderDismissedBefore;
@property (nonatomic, copy) NSDictionary *photoPickerProperties;
@property (nonatomic, copy) NSString *requestedClassName;
@property (nonatomic, retain) NSUUID *requestedIdentifier;
@property (nonatomic, readonly) bool requiresPickingConfirmation;
@property (nonatomic, readonly) unsigned long long savingOptions;
@property (nonatomic, readonly) bool showsFileSizePicker;
@property (nonatomic, readonly) bool showsPrompt;
@property (nonatomic, readonly) long long sourceType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsMultipleSelection;
- (bool)convertAutoloopsToGIF;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestedClassName:(id)arg1 photoPickerProperties:(id)arg2;
- (id)initWithRequestedIdentifier:(id)arg1 photoPickerProperties:(id)arg2;
- (id)mediaTypes;
- (long long)modalPresentationStyle;
- (unsigned long long)multipleSelectionLimit;
- (bool)onboardingHeaderDismissedBefore;
- (id)photoPickerProperties;
- (id)requestedClassName;
- (id)requestedIdentifier;
- (bool)requiresPickingConfirmation;
- (unsigned long long)savingOptions;
- (void)setPhotoPickerProperties:(id)arg1;
- (void)setRequestedClassName:(id)arg1;
- (void)setRequestedIdentifier:(id)arg1;
- (bool)showsFileSizePicker;
- (bool)showsPrompt;
- (long long)sourceType;

@end
