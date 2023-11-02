
@interface EDPreviouslyDownloadedMessageData : NSObject {
    bool  _hasFullMessageData;
    bool  _hasPartialMessageData;
    NSObject<OS_dispatch_data> * _headersOnlyData;
    NSArray * _mimeParts;
    NSObject<OS_dispatch_data> * _partialMessageData;
}

@property (nonatomic, readonly) bool hasFullMessageData;
@property (nonatomic, readonly) bool hasPartialMessageData;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *headersOnlyData;
@property (nonatomic, readonly) NSArray *mimeParts;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *partialMessageData;

- (void).cxx_destruct;
- (bool)hasFullMessageData;
- (bool)hasPartialMessageData;
- (id)headersOnlyData;
- (id)initWithHeadersOnlyData:(id)arg1 partialMessageData:(id)arg2 hasFullMessageData:(bool)arg3 hasPartialMessageData:(bool)arg4 mimeParts:(id)arg5;
- (id)mimeParts;
- (id)partialMessageData;

@end
