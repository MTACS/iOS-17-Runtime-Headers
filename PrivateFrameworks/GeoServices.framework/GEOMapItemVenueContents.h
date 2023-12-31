
@interface GEOMapItemVenueContents : NSObject <GEOMapItemVenueContents> {
    NSArray * _items;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)init;
- (id)initWithItemList:(id)arg1;
- (id)initWithTitle:(id)arg1 items:(id)arg2;
- (id)items;
- (id)title;

@end
