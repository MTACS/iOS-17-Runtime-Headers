
@interface WLKContinueWatchingResponse : NSObject {
    WLKContinueWatchingCollection * _featured;
    NSArray * _items;
}

@property (nonatomic, readonly, copy) WLKContinueWatchingCollection *featured;
@property (nonatomic, readonly, copy) NSArray *items;

- (void).cxx_destruct;
- (id)featured;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)items;

@end
