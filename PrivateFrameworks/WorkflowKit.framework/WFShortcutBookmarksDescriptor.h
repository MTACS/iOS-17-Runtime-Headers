
@interface WFShortcutBookmarksDescriptor : WFDatabaseObjectDescriptor {
    NSData * _bookmarkData;
    NSString * _path;
}

@property (nonatomic, readonly) NSData *bookmarkData;
@property (nonatomic, readonly) NSString *path;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bookmarkData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkflowID:(id)arg1 path:(id)arg2 bookmarkData:(id)arg3;
- (id)path;

@end
