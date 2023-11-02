
@interface DBLeafIcon : SBLeafIcon {
    DBApplicationInfo * _applicationInfo;
    FBSApplicationPlaceholder * _placeholder;
}

@property (nonatomic, readonly) DBApplicationInfo *applicationInfo;
@property (nonatomic, retain) FBSApplicationPlaceholder *placeholder;

+ (Class)dataSourceClass;

- (void).cxx_destruct;
- (id)applicationInfo;
- (id)initWithApplicationInfo:(id)arg1;
- (bool)isLaunchEnabled;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;

@end
