
@interface _UICalendarViewDecorationSystem : NSObject {
    NSMutableDictionary * _decorationViewFeed;
}

@property (nonatomic, retain) NSMutableDictionary *decorationViewFeed;

- (void).cxx_destruct;
- (void)_prepareDecorationFeedForKey:(id)arg1;
- (void)configureDecoration:(id)arg1;
- (id)decorationViewFeed;
- (id)init;
- (void)invalidateDecoration:(id)arg1;
- (void)reset;
- (void)setDecorationViewFeed:(id)arg1;

@end
