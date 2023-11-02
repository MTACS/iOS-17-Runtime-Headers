
@interface HistoryTableViewCellModel : NSObject {
    NSString * _identifier;
    NSString * _subtitle;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *url;

+ (id)urlForHistoryItem:(id)arg1;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)initWithHistoryItem:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 url:(id)arg3 identifier:(id)arg4;
- (id)subtitle;
- (id)title;
- (id)url;

@end
