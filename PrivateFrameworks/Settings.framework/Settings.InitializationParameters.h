
@interface Settings.InitializationParameters : NSObject <_EXSceneInitializationParameters> {
    void $__lazy_storage_$_isDefault;
    void anchor;
    void contentWidth;
    void itemIdentifier;
    void navigationPath;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
