
@interface WRCannedReply : NSObject {
    NSString * _defaultReplyKey;
    NSString * _defaultReplyText;
    NSString * _text;
}

@property (nonatomic, retain) NSString *defaultReplyKey;
@property (nonatomic, retain) NSString *defaultReplyText;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)defaultReplyKey;
- (id)defaultReplyText;
- (void)setDefaultReplyKey:(id)arg1;
- (void)setDefaultReplyText:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
