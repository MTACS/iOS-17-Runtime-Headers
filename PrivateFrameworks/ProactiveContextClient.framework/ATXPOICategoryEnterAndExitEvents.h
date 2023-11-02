
@interface ATXPOICategoryEnterAndExitEvents : NSObject {
    NSArray * _categoryEnterEvents;
    BMStoreEvent * _exitEvent;
}

@property (nonatomic, readonly) NSArray *categoryEnterEvents;
@property (nonatomic, readonly) BMStoreEvent *exitEvent;

- (void).cxx_destruct;
- (id)categoryEnterEvents;
- (id)exitEvent;
- (id)initWithCategoryEvents:(id)arg1 exitEvent:(id)arg2;
- (id)visitEvent;
- (id)visitEventAllowingMissingExit:(bool)arg1;

@end
