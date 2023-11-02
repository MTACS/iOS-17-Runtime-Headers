
@interface ATXDefaultHomeScreenItemUpdate : NSObject {
    NSArray * _extraLargeWidgets;
    NSArray * _largeWidgets;
    NSArray * _mediumWidgets;
    NSArray * _onboardingStacks;
    bool  _shouldSuggestStackInGallery;
    NSArray * _smallWidgets;
    ATXDefaultWidgetStack * _stack;
    ATXDefaultWidgetStack * _todayStack;
}

@property (nonatomic, readonly) NSArray *extraLargeWidgets;
@property (nonatomic, readonly) NSArray *largeWidgets;
@property (nonatomic, readonly) NSArray *mediumWidgets;
@property (nonatomic, readonly) NSArray *onboardingStacks;
@property (nonatomic, readonly) bool shouldSuggestStackInGallery;
@property (nonatomic, readonly) NSArray *smallWidgets;
@property (nonatomic, readonly) ATXDefaultWidgetStack *stack;
@property (nonatomic, readonly) ATXDefaultWidgetStack *todayStack;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)extraLargeWidgets;
- (id)initWithDictionary:(id)arg1;
- (id)initWithStack:(id)arg1 todayStack:(id)arg2 onboardingStacks:(id)arg3 smallWidgets:(id)arg4 mediumWidgets:(id)arg5 largeWidgets:(id)arg6 extraLargeWidgets:(id)arg7 shouldSuggestStackInGallery:(bool)arg8;
- (bool)isEqual:(id)arg1;
- (id)largeWidgets;
- (id)mediumWidgets;
- (id)onboardingStacks;
- (bool)shouldSuggestStackInGallery;
- (id)smallWidgets;
- (id)stack;
- (id)todayStack;

@end
