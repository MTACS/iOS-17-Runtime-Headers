
@interface CPSTableCell : CPUITableCell <CPSCellSizable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)heightForListItem:(id)arg1;

- (void)configureWithListItem:(id)arg1 spinning:(bool)arg2 environment:(id)arg3 playbackState:(long long)arg4;

@end
