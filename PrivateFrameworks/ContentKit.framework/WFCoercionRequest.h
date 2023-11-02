
@interface WFCoercionRequest : NSObject <NSCopying> {
    id /* block */  _contentCollectionResultHandler;
    NSArray * _contentItemClasses;
    id /* block */  _contentItemsCompletionHandler;
    id /* block */  _fileRepresentationResultHandler;
    WFFileType * _fileType;
    Class  _objectClass;
    id /* block */  _objectRepresentationResultHandler;
    WFCoercionOptions * _options;
    long long  _requestType;
}

@property (nonatomic, readonly) id /* block */ contentCollectionResultHandler;
@property (nonatomic, readonly) NSArray *contentItemClasses;
@property (nonatomic, readonly) id /* block */ contentItemsCompletionHandler;
@property (nonatomic, readonly) id /* block */ fileRepresentationResultHandler;
@property (nonatomic, readonly) WFFileType *fileType;
@property (nonatomic, readonly) Class objectClass;
@property (nonatomic, readonly) id /* block */ objectRepresentationResultHandler;
@property (nonatomic, retain) WFCoercionOptions *options;
@property (nonatomic, readonly) long long requestType;

+ (id)_requestForCoercingToContentClasses:(id)arg1 itemCompletionHandler:(id /* block */)arg2;
+ (id)requestForCoercingToContentClasses:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)requestForCoercingToFileType:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)requestForCoercingToObjectClass:(Class)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)completeContentItemCoercionRequestWithResultItems:(id)arg1 originalItem:(id)arg2 error:(id)arg3;
- (id /* block */)contentCollectionResultHandler;
- (id)contentItemClasses;
- (id /* block */)contentItemsCompletionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)fileRepresentationResultHandler;
- (id)fileType;
- (Class)objectClass;
- (id /* block */)objectRepresentationResultHandler;
- (id)options;
- (long long)requestType;
- (void)setOptions:(id)arg1;

@end
