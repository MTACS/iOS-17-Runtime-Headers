
@interface EMMailToURLComponents : NSObject {
    NSArray * _bccRecipients;
    NSString * _body;
    NSArray * _ccRecipients;
    NSString * _from;
    NSString * _subject;
    NSArray * _toRecipients;
}

@property (nonatomic, readonly) NSArray *bccRecipients;
@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) NSArray *ccRecipients;
@property (nonatomic, readonly) NSString *from;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) NSArray *toRecipients;

+ (id)componentsWithURL:(id)arg1;

- (void).cxx_destruct;
- (void)_decomposeURL:(id)arg1;
- (id)bccRecipients;
- (id)body;
- (id)ccRecipients;
- (id)from;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)subject;
- (id)toRecipients;

@end
