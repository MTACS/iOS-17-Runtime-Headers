
@interface PXCollectionSortMenuItemConfiguration : NSObject {
    bool  _actionAscending;
    bool  _selected;
    long long  _sortOrder;
    NSString * _systemImageName;
    NSString * _title;
}

@property (nonatomic, readonly) bool actionAscending;
@property (nonatomic, readonly) bool selected;
@property (nonatomic, readonly) long long sortOrder;
@property (nonatomic, readonly) NSString *systemImageName;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (bool)actionAscending;
- (id)initWithSortOrder:(long long)arg1 title:(id)arg2 systemImageName:(id)arg3 selected:(bool)arg4 actionAscending:(bool)arg5;
- (bool)selected;
- (long long)sortOrder;
- (id)systemImageName;
- (id)title;

@end
