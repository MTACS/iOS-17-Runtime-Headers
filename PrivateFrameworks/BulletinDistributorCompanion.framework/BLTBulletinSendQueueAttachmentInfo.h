
@interface BLTBulletinSendQueueAttachmentInfo : NSObject {
    NSString * _key;
    NSURL * _url;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
