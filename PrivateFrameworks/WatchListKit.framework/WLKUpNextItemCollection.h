
@interface WLKUpNextItemCollection : NSObject {
    NSArray * _items;
    NSDate * _timestamp;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly, copy) NSDate *timestamp;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (id)items;
- (id)timestamp;
- (id)title;

@end
