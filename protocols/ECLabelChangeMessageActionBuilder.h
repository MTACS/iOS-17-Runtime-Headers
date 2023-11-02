
@protocol ECLabelChangeMessageActionBuilder <ECLocalMessageActionBuilder>

@required

- (NSSet *)labelsToAdd;
- (NSSet *)labelsToRemove;
- (NSArray *)messages;
- (NSSet *)remoteIDs;
- (void)setLabelsToAdd:(NSSet *)arg1;
- (void)setLabelsToRemove:(NSSet *)arg1;
- (void)setMessages:(NSArray *)arg1;
- (void)setRemoteIDs:(NSSet *)arg1;

@end
