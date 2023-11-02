
@interface HUQuickControlGridItemPredicate : NSObject <HUQuickControlItemPredicate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maximumNumberOfMatches;
@property (readonly) Class superclass;

- (id)matchingControlItemsForControlItems:(id)arg1;
- (unsigned long long)maximumNumberOfMatches;

@end
