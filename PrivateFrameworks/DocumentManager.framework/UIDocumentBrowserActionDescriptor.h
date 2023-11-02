
@interface UIDocumentBrowserActionDescriptor : NSObject {
    bool  _displayInline;
    NSString * _displayName;
    NSString * _fileProviderIdentifier;
    NSString * _identifier;
    NSPredicate * _predicate;
    NSString * _uiActionProviderIdentifier;
}

@property (nonatomic, readonly) bool displayInline;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *fileProviderIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) NSString *uiActionProviderIdentifier;

- (void).cxx_destruct;
- (bool)displayInline;
- (id)displayName;
- (id)fileProviderIdentifier;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 uiActionProviderIdentifier:(id)arg2 fileProviderIdentifier:(id)arg3 displayName:(id)arg4 predicate:(id)arg5 displayInline:(bool)arg6;
- (id)predicate;
- (id)uiActionProviderIdentifier;

@end
