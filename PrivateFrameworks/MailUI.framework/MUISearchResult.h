
@interface MUISearchResult : NSObject {
    NSArray * _categories;
    unsigned char  _phraseKind;
    MUISearchRequestID * _requestID;
    NSArray * _suggestions;
}

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) unsigned char phraseKind;
@property (nonatomic, readonly) MUISearchRequestID *requestID;
@property (nonatomic, readonly) NSArray *suggestions;

- (void).cxx_destruct;
- (id)categories;
- (unsigned char)phraseKind;
- (id)requestID;
- (id)suggestions;

@end
