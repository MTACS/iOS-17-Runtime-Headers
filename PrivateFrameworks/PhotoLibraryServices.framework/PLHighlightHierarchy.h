
@interface PLHighlightHierarchy : NSObject {
    NSMutableSet * _dayGroupHighlights;
    NSMutableSet * _dayHighlights;
    NSMutableSet * _moments;
}

@property (nonatomic, readonly) NSMutableSet *dayGroupHighlights;
@property (nonatomic, readonly) NSMutableSet *dayHighlights;
@property (nonatomic, readonly) NSMutableSet *moments;

- (void).cxx_destruct;
- (void)_addDayHighlight:(id)arg1;
- (void)_addMoment:(id)arg1;
- (void)addDayGroupHighlight:(id)arg1;
- (void)addDayHighlight:(id)arg1;
- (void)addMoment:(id)arg1;
- (id)dayGroupHighlights;
- (id)dayHighlights;
- (id)init;
- (id)moments;

@end
