
@protocol _CPCardSectionForFeedback <NSObject>

@required

- (NSString *)actionDestination;
- (NSString *)actionTarget;
- (void)addButtons:(_CPButtonForFeedback *)arg1;
- (void)addCardSections:(_CPCardSectionForFeedback *)arg1;
- (void)addLeadingSwipeButtonItems:(_CPButtonForFeedback *)arg1;
- (void)addTrailingSwipeButtonItems:(_CPButtonForFeedback *)arg1;
- (NSArray *)buttons;
- (_CPButtonForFeedback *)buttonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)buttonsCount;
- (NSString *)cardSectionDetail;
- (NSString *)cardSectionId;
- (int)cardSectionType;
- (NSArray *)cardSections;
- (_CPCardSectionForFeedback *)cardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardSectionsCount;
- (void)clearButtons;
- (void)clearCardSections;
- (void)clearLeadingSwipeButtonItems;
- (void)clearTrailingSwipeButtonItems;
- (NSString *)commandDetail;
- (int)commandType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)leadingSwipeButtonItems;
- (_CPButtonForFeedback *)leadingSwipeButtonItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)leadingSwipeButtonItemsCount;
- (NSString *)resultId;
- (void)setActionDestination:(NSString *)arg1;
- (void)setActionTarget:(NSString *)arg1;
- (void)setButtons:(NSArray *)arg1;
- (void)setCardSectionDetail:(NSString *)arg1;
- (void)setCardSectionId:(NSString *)arg1;
- (void)setCardSectionType:(int)arg1;
- (void)setCardSections:(NSArray *)arg1;
- (void)setCommandDetail:(NSString *)arg1;
- (void)setCommandType:(int)arg1;
- (void)setLeadingSwipeButtonItems:(NSArray *)arg1;
- (void)setResultId:(NSString *)arg1;
- (void)setTrailingSwipeButtonItems:(NSArray *)arg1;
- (NSArray *)trailingSwipeButtonItems;
- (_CPButtonForFeedback *)trailingSwipeButtonItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trailingSwipeButtonItemsCount;

@end
