
@interface BCMessageData : NSObject {
    NSData * _data;
    NSDictionary * _jsonDictionary;
    NSDictionary * _receivedMessageDictionary;
    NSDictionary * _replyMessageDictionary;
    NSURL * _url;
}

@property (nonatomic, readonly) NSDictionary *combinedDictionary;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSArray *imagesArray;
@property (nonatomic, readonly) NSDictionary *jsonDictionary;
@property (nonatomic, readonly) NSDictionary *receivedMessageDictionary;
@property (nonatomic, readonly) NSDictionary *replyMessageDictionary;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)combinedDictionary;
- (id)data;
- (id)imagesArray;
- (id)initWithUrl:(id)arg1 data:(id)arg2;
- (id)jsonDictionary;
- (id)receivedMessageDictionary;
- (id)replyMessageDictionary;
- (id)url;

@end
