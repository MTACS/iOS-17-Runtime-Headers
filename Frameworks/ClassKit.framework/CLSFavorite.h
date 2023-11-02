
@interface CLSFavorite : CLSObject {
    NSURL * _URL;
    NSString * _bundleIdentifier;
    NSString * _contentStoreIdentifier;
    NSString * _contextCustomTypeName;
    NSArray * _contextIdentifierPath;
    NSString * _contextSummary;
    long long  _contextType;
    NSString * _storeIdentifier;
    NSString * _title;
    int  _type;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *contentStoreIdentifier;
@property (nonatomic, retain) NSString *contextCustomTypeName;
@property (nonatomic, retain) NSArray *contextIdentifierPath;
@property (nonatomic, retain) NSString *contextSummary;
@property (nonatomic) long long contextType;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) int type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)bundleIdentifier;
- (id)contentStoreIdentifier;
- (id)contextCustomTypeName;
- (id)contextIdentifierPath;
- (id)contextSummary;
- (long long)contextType;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 URL:(id)arg2 andBundleIdentifier:(id)arg3;
- (id)initWithTitle:(id)arg1 context:(id)arg2;
- (id)initWithTitle:(id)arg1 contextIdentifierPath:(id)arg2 URL:(id)arg3 type:(int)arg4 contextType:(long long)arg5 andBundleIdentifier:(id)arg6 contentStoreIdentifier:(id)arg7 contextSummary:(id)arg8 contextCustomTypeName:(id)arg9;
- (void)setBundleIdentifier:(id)arg1;
- (void)setContentStoreIdentifier:(id)arg1;
- (void)setContextCustomTypeName:(id)arg1;
- (void)setContextIdentifierPath:(id)arg1;
- (void)setContextSummary:(id)arg1;
- (void)setContextType:(long long)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (void)setURL:(id)arg1;
- (id)storeIdentifier;
- (id)title;
- (int)type;
- (bool)validateObject:(id*)arg1;

@end
