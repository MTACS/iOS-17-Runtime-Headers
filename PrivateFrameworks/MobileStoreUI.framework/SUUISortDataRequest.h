
@interface SUUISortDataRequest : SUUIResourceRequest <NSCopying> {
    <SUUISortDataRequestDelegate> * _delegate;
    NSURL * _sortURL;
}

@property (nonatomic) <SUUISortDataRequestDelegate> *delegate;
@property (nonatomic, readonly) NSURL *sortURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)finishWithResource:(id)arg1;
- (id)initWithSortURL:(id)arg1;
- (id)newLoadOperation;
- (void)setDelegate:(id)arg1;
- (id)sortURL;

@end
