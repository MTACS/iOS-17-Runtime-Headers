
@protocol NUPagingFactory <NSObject>

@required

- (<NUPaging> *)createPagingForArticleIDs:(NSArray *)arg1;
- (<NUPaging> *)paging:(id <NUPaging>)arg1 byAddingPage:(id <NUPage>)arg2 afterPage:(id <NUPage>)arg3;
- (<NUPaging> *)paging:(id <NUPaging>)arg1 byRemovingPage:(id <NUPage>)arg2;

@end
