
@interface CPSImageRowCell : CPUIImageRowCell <CPSCellSizable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)heightForListItem:(id)arg1;

- (void)configureWithImageRowItem:(id)arg1 selectGridItemBlock:(id /* block */)arg2 selectTitleBlock:(id /* block */)arg3 showActivityIndicator:(bool)arg4;

@end
