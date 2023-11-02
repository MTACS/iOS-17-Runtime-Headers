
@interface SidecarService : NSObject {
    SidecarDevice * _targetDevice;
}

@property (nonatomic, readonly) NSArray *devices;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *localizedItemName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *pasteboardTypes;
@property (nonatomic, readonly) NSArray *returnTypes;
@property (nonatomic, readonly) NSArray *sendTypes;
@property (nonatomic, readonly) NSString *serviceExtension;
@property (nonatomic, readonly) NSString *serviceIdentifier;

+ (id)allMenuServices;
+ (id)allReturnTypes;
+ (id)allSendTypes;
+ (id)allServices;
+ (id)extensionForIdentifier:(id)arg1;
+ (id)menuServices;
+ (long long)minimumRapportVersion;
+ (id)name;
+ (id)returnTypes;
+ (id)serviceWithIdentifier:(id)arg1;
+ (id)serviceWithName:(id)arg1;
+ (id)services;
+ (id)servicesForPasteboardSendTypes:(id)arg1 returnTypes:(id)arg2;
+ (id)servicesForPasteboardTypes:(id)arg1;
+ (id)supportedPasteboardTypes;

- (void).cxx_destruct;
- (id)copyWithDevice:(id)arg1;
- (id)devices;
- (id)init;
- (id)initWithDevice:(id)arg1;
- (bool)isEnabled;
- (id)localizedDescription;
- (id)localizedItemName;
- (id)makeRequest;
- (id)makeRequestToDevice:(id)arg1;
- (id)makeRequestWithResponder:(id)arg1 sendTypes:(id)arg2 returnTypes:(id)arg3;
- (id)mutableRequestMessage;
- (id)name;
- (id)pasteboardTypes;
- (id)returnTypes;
- (id)sendTypes;
- (id)serviceExtension;
- (id)serviceIdentifier;

@end
