
@interface WFTrelloSessionManager : NSObject {
    NSURL * _baseURL;
    NSDateFormatter * _dateFormatter;
    NSURLSession * _session;
    NSString * _token;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSDateFormatter *dateFormatter;
@property (nonatomic, readonly) NSURLSession *session;
@property (nonatomic, copy) NSString *token;

- (void).cxx_destruct;
- (id)baseURL;
- (void)createBoardWithName:(id)arg1 boardDescription:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)createCardWithName:(id)arg1 listIdentifier:(id)arg2 dueDate:(id)arg3 cardPosition:(id)arg4 cardDescription:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)createListWithName:(id)arg1 onBoardWithIdentifier:(id)arg2 position:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)dateFormatter;
- (void)getAttachmentsOnCard:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getCardsForList:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getListsForBoard:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getOpenBoardsWithCompletionHandler:(id /* block */)arg1;
- (void)getUserWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1 token:(id)arg2;
- (void)lookupCardWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestPath:(id)arg1 parameters:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)session;
- (void)setToken:(id)arg1;
- (id)token;
- (void)uploadFile:(id)arg1 onCard:(id)arg2 completionHandler:(id /* block */)arg3;

@end
