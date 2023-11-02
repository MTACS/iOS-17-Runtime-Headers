
@protocol REMChangeCoalesceable

@required

- (NSArray *)coalescedChanges;
- (id)copyForCoalescing;
- (bool)isCoalesced;
- (NSSet *)updatedProperties;

@end
