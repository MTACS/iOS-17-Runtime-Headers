
@interface _UINavigationBarNSToolbarProxy : NSObject {
    struct { 
        unsigned int needsUpdate : 1; 
        unsigned int needsRefresh : 1; 
    }  _flags;
    UITitlebar * _owningTitlebar;
    NSMutableSet * _registeredParticipants;
    id /* block */  _representedDragItemsProvider;
    NSURL * _representedURL;
    NSString * _title;
}

@property (nonatomic, readonly) UITitlebar *owningTitlebar;
@property (nonatomic, readonly, copy) id /* block */ representedDragItemsProvider;
@property (nonatomic, readonly) NSURL *representedURL;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSToolbar *toolbar;

+ (bool)_supportsNSToolbarNavigationHosting;

- (void).cxx_destruct;
- (void)_updateIfNecessary;
- (id)description;
- (id)initWithTitlebar:(id)arg1;
- (id)owningTitlebar;
- (void)registerToolbarParticipant:(id)arg1;
- (id /* block */)representedDragItemsProvider;
- (id)representedURL;
- (void)setNeedsUpdate;
- (id)title;
- (id)toolbar;
- (void)unregisterToolbarParticipant:(id)arg1;

@end
