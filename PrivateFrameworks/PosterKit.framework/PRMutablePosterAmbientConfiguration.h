
@interface PRMutablePosterAmbientConfiguration : PRPosterAmbientConfiguration

@property (nonatomic) long long creationBehavior;
@property (nonatomic) long long deletionBehavior;
@property (nonatomic, copy) NSString *displayNameSystemSymbolName;
@property (nonatomic) long long editingBehavior;
@property (nonatomic, retain) <PRPosterContentStyle> *editingContentStyle;
@property (nonatomic, copy) NSString *editingSystemSymbolName;
@property (nonatomic) bool hidden;
@property (nonatomic) bool needsAuthentication;
@property (nonatomic) long long supportedDataLayout;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
