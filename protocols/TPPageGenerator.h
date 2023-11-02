
@protocol TPPageGenerator <NSObject>

@required

- (void)createOrUpdatePageHintInSectionHint:(TPSectionHint *)arg1 withState:(_TtC14PagesQuicklook17TPPaginationState *)arg2;
- (bool)wantsPageInSectionHint:(TPSectionHint *)arg1 withState:(_TtC14PagesQuicklook17TPPaginationState *)arg2;

@end
