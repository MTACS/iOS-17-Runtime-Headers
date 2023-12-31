
@interface DDMessageCacheElement : NSObject {
    NSDate * _date;
    NSString * _text;
}

@property (retain) NSDate *date;
@property (retain) NSString *text;

- (void).cxx_destruct;
- (id)date;
- (void)setDate:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
