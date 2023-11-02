
@interface ATXHomeScreenFolder : NSObject <ATXHomeScreenLeafIconRepresentable> {
    NSMutableArray * _folderPages;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *folderPages;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addIcon:(id)arg1 folderPageIndex:(unsigned long long)arg2;
- (id)dictionaryRepresentationForIntrospection;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateApps:(id /* block */)arg1;
- (id)folderPages;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFolderPages:(id)arg1 name:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXHomeScreenFolder:(id)arg1;
- (id)name;

@end
