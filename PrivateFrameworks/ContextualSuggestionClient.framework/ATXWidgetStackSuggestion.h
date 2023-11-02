
@interface ATXWidgetStackSuggestion : NSObject {
    void stackIdentifier;
    void suggestedWidgets;
    void topWidget;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *stackIdentifier;
@property (nonatomic, readonly) NSSet *suggestedWidgets;
@property (nonatomic, readonly) ATXWidget *topWidget;
@property (nonatomic, readonly) NSString *topWidgetIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithStackIdentifier:(id)arg1 topWidget:(id)arg2 suggestedWidgets:(id)arg3;
- (id)stackIdentifier;
- (id)suggestedWidgets;
- (id)topWidget;
- (id)topWidgetIdentifier;

@end
