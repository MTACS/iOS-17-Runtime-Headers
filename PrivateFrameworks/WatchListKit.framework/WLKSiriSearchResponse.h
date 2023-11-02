
@interface WLKSiriSearchResponse : NSObject {
    NSDictionary * _dictionary;
    NSArray * _items;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionary;
@property (nonatomic, readonly, copy) NSArray *items;

- (void).cxx_destruct;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)items;

@end
