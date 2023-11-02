
@interface MKPublisherIcon : NSObject {
    UIImage * _publisherImage;
    NSString * _publisherName;
}

@property (nonatomic, readonly) UIImage *publisherImage;
@property (nonatomic, readonly) NSString *publisherName;

- (void).cxx_destruct;
- (id)initUsingName:(id)arg1 andImage:(id)arg2;
- (id)publisherImage;
- (id)publisherName;

@end
