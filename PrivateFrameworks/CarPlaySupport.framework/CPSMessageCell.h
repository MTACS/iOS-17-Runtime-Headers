
@interface CPSMessageCell : CPUIMessageCell <CPSCellSizable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)heightForListItem:(id)arg1;

- (void)configureWithMessageListItem:(id)arg1;

@end
