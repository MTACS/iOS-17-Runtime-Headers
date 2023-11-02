
@interface EKVirtualConferenceRoomType : NSObject {
    NSString * _extensionBundleIdentifier;
    NSString * _identifier;
    NSString * _originatingExtensionIdentifier;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *originatingExtensionIdentifier;
@property (nonatomic, readonly) NSString *title;

+ (void)virtualConferenceRoomTypesWithCompletion:(id /* block */)arg1 queue:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)extensionBundleIdentifier;
- (id)identifier;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 extensionBundleIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)originatingExtensionIdentifier;
- (id)title;

@end
