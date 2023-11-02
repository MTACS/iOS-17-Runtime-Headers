
@interface VUIMediaLibraryFetchMediaEntitiesOperation : VUIMediaLibraryOperation {
    NSArray * _requests;
    NSArray * _responses;
}

@property (nonatomic, copy) NSArray *requests;
@property (nonatomic, copy) NSArray *responses;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)initWithMediaLibrary:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1 requests:(id)arg2;
- (id)requests;
- (id)responses;
- (void)setRequests:(id)arg1;
- (void)setResponses:(id)arg1;

@end
