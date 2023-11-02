
@interface MKBookmark : NSObject {
    NSString * _ID;
    NSDictionary * _data;
    NSString * _title;
    NSString * _url;
}

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *url;

- (void).cxx_destruct;
- (id)ID;
- (id)data;
- (id)initWithData:(id)arg1;
- (void)setData:(id)arg1;
- (void)setID:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)title;
- (id)url;

@end
