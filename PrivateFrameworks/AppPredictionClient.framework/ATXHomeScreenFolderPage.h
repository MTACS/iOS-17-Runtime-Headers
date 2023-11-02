
@interface ATXHomeScreenFolderPage : NSObject <NSSecureCoding> {
    NSMutableArray * _contents;
}

@property (nonatomic, readonly, copy) NSArray *contents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addIcon:(id)arg1;
- (id)contents;
- (id)dictionaryRepresentationForIntrospection;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContents:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXHomeScreenFolderPage:(id)arg1;

@end
