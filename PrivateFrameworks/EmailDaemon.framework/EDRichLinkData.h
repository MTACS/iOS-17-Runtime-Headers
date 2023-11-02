
@interface EDRichLinkData : NSObject {
    NSData * _data;
    NSNumber * _persistentID;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSNumber *persistentID;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)data;
- (id)initWithPersistentID:(id)arg1 title:(id)arg2 url:(id)arg3 data:(id)arg4;
- (id)initWithTitle:(id)arg1 url:(id)arg2 data:(id)arg3;
- (id)persistentID;
- (id)title;
- (id)url;

@end
