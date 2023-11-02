
@interface ATXFavoriteContactDataSource : NSObject {
    ATXHeuristicDevice * _device;
}

+ (id)_entryToDict:(id)arg1 device:(id)arg2;

- (void).cxx_destruct;
- (void)favoritesWithContacts:(id)arg1 callback:(id /* block */)arg2;
- (id)initWithDevice:(id)arg1;

@end
