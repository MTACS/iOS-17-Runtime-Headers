
@protocol CNUIUserActionDialRequestOpener <NSObject>

@required

- (CNFuture *)openDialRequest:(id <CNTUDialRequest>)arg1 withScheduler:(id <CNScheduler>)arg2;

@end
