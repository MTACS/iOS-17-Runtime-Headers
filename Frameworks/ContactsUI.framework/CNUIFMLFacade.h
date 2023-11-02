
@interface CNUIFMLFacade : NSObject {
    _TtC10ContactsUI19FindMyLocateSession * _findMyLocateSession;
}

@property (nonatomic, readonly) _TtC10ContactsUI19FindMyLocateSession *findMyLocateSession;

- (void).cxx_destruct;
- (void)fetchFriendHandlesWithCompletionHandler:(id /* block */)arg1;
- (id)findMyLocateSession;
- (id)init;
- (id)initWithFMLSession:(id)arg1;

@end
