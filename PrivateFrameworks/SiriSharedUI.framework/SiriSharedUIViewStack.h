
@interface SiriSharedUIViewStack : NSObject <NSCopying> {
    NSMutableOrderedSet * _mutableViews;
}

@property (nonatomic, readonly) NSArray *contentViews;
@property (nonatomic, readonly) UIView<SiriSharedUIStackableContent><SiriSharedUIStackableContentActionOffering> *mostRecentlyAddedView;
@property (nonatomic, retain) NSMutableOrderedSet *mutableViews;

- (void).cxx_destruct;
- (void)addContentView:(id)arg1;
- (bool)containsContentView:(id)arg1;
- (id)contentViews;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithContentViews:(id)arg1;
- (id)mostRecentlyAddedView;
- (id)mutableViews;
- (id)nextViewAfterContentView:(id)arg1;
- (id)previousViewBeforeContentView:(id)arg1;
- (void)removeContentView:(id)arg1;
- (void)reset;
- (void)setContentViews:(id)arg1;
- (void)setMutableViews:(id)arg1;
- (id)viewAtIndex:(long long)arg1;

@end
