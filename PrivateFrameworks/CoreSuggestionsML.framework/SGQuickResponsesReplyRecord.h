
@interface SGQuickResponsesReplyRecord : NSObject {
    double  _displayed;
    NSString * _langResponse;
    double  _matched;
    double  _selected;
}

@property (nonatomic, readonly) double displayed;
@property (nonatomic, readonly) NSString *langResponse;
@property (nonatomic, readonly) double matched;
@property (nonatomic, readonly) double selected;

- (void).cxx_destruct;
- (double)displayed;
- (id)initWithDisplayed:(double)arg1 selected:(double)arg2 matched:(double)arg3;
- (id)langResponse;
- (double)matched;
- (double)selected;

@end
