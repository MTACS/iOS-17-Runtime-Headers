
@interface _PXSharedLibrarySettingsSection : NSObject {
    NSString * _caption;
    NSMutableArray * _items;
    NSString * _title;
}

@property (nonatomic, copy) NSString *caption;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)addItemWithConfigurationHandler:(id /* block */)arg1;
- (id)caption;
- (id)items;
- (void)setCaption:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
