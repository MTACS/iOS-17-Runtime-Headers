
@interface ATXSuggestedPagesUtils : NSObject

+ (id)_createStackOfSize:(unsigned long long)arg1;
+ (id)createLargeStack;
+ (id)createMediumStack;
+ (id)createSmallStack;
+ (void)evenlyDistributeWidgets:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 amongStacks:(id)arg3 usedPersonalities:(id)arg4 maxWidgetsInStack:(unsigned long long)arg5;
+ (id)filterWidgets:(id)arg1 bySize:(unsigned long long)arg2 usedPersonalities:(id)arg3;
+ (unsigned long long)modeForSuggestedPageType:(long long)arg1;
+ (id)semanticTypeForSuggestedPageType:(long long)arg1;
+ (id)sortWidgetsByDescendingScore:(id)arg1 limit:(unsigned long long)arg2;

@end
